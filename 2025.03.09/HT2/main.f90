program main
    use fibonacci_functions
    implicit none
    integer :: i, n, result
    real(8) :: result_real

    print *, "Enter n:"
    read *, n

    result = fibon(n)
    print *, "Nonrec fibon:", result

    result = fibori(n)
    print *, "Rec fibori:", result

    result = fibor2(1, n, 1, 1)
    print *, "Rec fibor2:", result

    result = fibor3(n, (/ (0, i=1,100) /))
    print *, "Rec fibor3:", result

    result_real = fibof(n)
    print *, "Rec with formula fibof:", result_real
end program main