program stars
real :: t, m, x, n
write (*, *) 'Enter your the star`s magnitude and their number'
read *, m, n
t = -2.5*log10(n*(10**(-0.4*m)))
!t = -2.5 * log10((10**(-0.4*m)) + (10**(-0.4*n)))
print *, t
end program