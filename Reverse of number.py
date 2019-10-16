N = int(input("Please Enter any Number: "))
Reverse = 0
while(N > 0):
    Remainder = N %10
    Reverse = (Reverse *10) + Remainder
    N = N //10

print("\n Reverse of Number is= %d" %Reverse)
