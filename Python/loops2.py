print("Q1) WAP to find the sum of first n numbers using while loop")

n = int(input("Enter a number: "))

sum = 0
i = 1

while i <= n:
    sum =sum+i
    i =i+1

print(f"The sum of the first {n} numbers is: {sum}")

########################################################################################################

print("WAP to find the factorial of first n numbers. (using for)")

x = int(input("Enter a number: "))

fact=1
for i in range(1,x+1):
    fact=fact*i
    i=i+1

print(f"The fact of the first {x} numbers is: {fact}")

