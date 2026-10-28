x=[]
n=int(input ("enter any integers:"))
for i in range(1,n+1):
    a=int(input())
    if(a>100):
        x.append('over')
    else:
        x.append(a)
print("modified list:",x)
