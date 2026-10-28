n=int(input("enter any number"))
rev=0
temp=n
while(temp>0):
    r=temp%10
    rev=(rev*10)+r
    temp=temp//10
print("reverse of this given number is ",rev)
if(n==rev):
    print("it is palindrome")
else:
    print("it is not palindrome")
