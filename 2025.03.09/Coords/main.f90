program main
    use mod
    implicit none

    type(coord4) :: a4, b4
    type(coord8) :: a8, b8
    real(4) :: d4
    real(8) :: d8

    print *, "A4 coords:"
    call rdr(a4)
    call wrt(a4)

    print *, "B4 coords:"
    call rdr(b4)
    call wrt(b4)
    d4 = dist(a4, b4)

    write (*, *) 'distance is', d4

    print *, "A8 coords:"
    call rdr(a8)
    call wrt(a8)

    print *, "B8 coords:"
    call rdr(b8)
    call wrt(b8)

    d8 = dist(a8, b8)

    write (*, *) 'distance is', d8
end program main
