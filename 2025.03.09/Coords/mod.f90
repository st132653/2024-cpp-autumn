module mod
    implicit none
    type :: coord4
        real(4) :: x, y, z
    end type coord4

    type :: coord8
        real(8) :: x, y, z
    end type coord8

    interface rdr
        module procedure rdr4, rdr8
    end interface

    interface wrt
        module procedure wrt4, wrt8
    end interface

    interface dist
        module procedure dist4, dist8
    end interface

contains
    subroutine rdr4(c)
        type(coord4) :: c
        read(*,*) c%x, c%y, c%z
    end subroutine rdr4

    subroutine rdr8(c)
        type(coord8) :: c
        read(*,*) c%x, c%y, c%z
    end subroutine rdr8

    subroutine wrt4(c)
        type(coord4) :: c
        print *, "coord4:", c%x, c%y, c%z
    end subroutine wrt4

    subroutine wrt8(c)
        type(coord8) :: c
        print *, "coord8:", c%x, c%y, c%z
    end subroutine wrt8

    function dist4(c1, c2) result(distance)
        type(coord4) :: c1, c2
        real(4) :: distance
        distance = sqrt((c1%x - c2%x)**2 + (c1%y - c2%y)**2 + (c1%z - c2%z)**2)
    end function dist4

    function dist8(c1, c2) result(distance)
        type(coord8) :: c1, c2
        real(8) :: distance
        distance = sqrt((c1%x - c2%x)**2 + (c1%y - c2%y)**2 + (c1%z - c2%z)**2)
    end function dist8
end module mod