module fibonacci_functions
    implicit none
contains
    function fibon(n) result(f3)
        integer :: f1, f2, f3, n, i
        f1 = 1; f2 = 1; f3 = 1
        do i = 3, n
            f3 = f1 + f2
            f1 = f2
            f2 = f3
        end do
    end function fibon

    recursive function fibori(n) result(w)
        integer :: n, w
        if (n < 3) then
            w = 1
        else
            w = fibori(n-1) + fibori(n-2)
        end if
    end function fibori

    recursive function fibor2(k, n, fk1, fk) result(w)
        integer :: k, n, fk1, fk, w
        if (k == n) then
            w = fk
        else
            w = fibor2(k+1, n, fk, fk + fk1)
        end if
    end function fibor2

    recursive function fibor3(n, f) result(w)
        integer :: n, w
        integer :: f(100)
        if (n == 1 .or. n == 2) then
            f(n) = 1
            w = 1
        end if
        if (f(n) /= 0) then
            w = f(n)
        else
            f(n) = fibor3(n-1, f) + fibor3(n-2, f)
            w = f(n)
        end if
    end function fibor3

    function fibof(n) result(w)
        integer :: n
        real(8) :: w
        real(8), parameter :: c5 = sqrt(5.0d0)
        real(8), parameter :: x = (1.0d0 + c5) * 0.5d0
        real(8), parameter :: y = (1.0d0 - c5) * 0.5d0
        w = (x**n - y**n) / c5
    end function fibof
end module fibonacci_functions