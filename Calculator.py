num1=float(input("enter the first number"))
operator=input("enter the operator(+,-,*,/):")
num2=float(input("enter the second number"))
if operator=="+":
    print(num1+num2)
if operator=="-":
        result=num1-num2
elif operator=="*":
        result=num1*num2
elif operator=="/":
  if num2!=0:
      result=num1/num2
  else:
      result="Invaild"
elif operator=="^":
        result=num1**num2
elif operator=="%":
        result=num1%num2
else:
    result="Invalid operator"

print(result)




