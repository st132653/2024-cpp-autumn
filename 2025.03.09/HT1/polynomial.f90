module polynomial
    implicit none
contains
    real function poly(coeff, x, n)
        integer, intent(in) :: n     
        real, intent(in) :: coeff(n+1) 
        real, intent(in) :: x         
        integer :: i
        
        poly = coeff(n+1)           
        do i = n, 1, -1
            poly = poly * x + coeff(i)
        end do
    end function poly
end module polynomial