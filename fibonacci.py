n=int(input("Enter any number:"))
x,y=0,1
count=0
if n<=0:
    print("Please enter a positive integer")
elif n==1:
    print("The Fibonacci sequence is : ")
    print(x)
else:
    print("The Fibonacci sequence is : ")
    while count<n:
        print(x)
        z=x+y
        x=y
        y=z
        count=count+1