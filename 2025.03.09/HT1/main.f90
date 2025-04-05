program main
  use polynomial
  implicit none
  !real, allocatable :: coeff(:)
  real :: coeff(100), x, result
  integer :: n, i
 ! print *, 'Введите аргумент'
 ! read *, x
  do while (coeff(i) > 0)
    do i = 1, 100 
    print *, 'введите коэффициент'
    read *, coeff(i)
    print *, coeff(i)
    end do
  end do
  n = 3                        
  print *, 'Введите аргумент'
  read *, x 
  result = poly(coeff, x, n)
  print *, "P(", x, ") = ", result  
end program main