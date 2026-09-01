#include<stdio.h>
int main()
{
int a[10],n,key,i;
printf("Enter the number of the elements:");
scanf("%d",&n);
printf("Enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter element to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Element Found at position %d",i+1);
return 0 ;
}
}
printf("Element not Found");
return 0;
}

