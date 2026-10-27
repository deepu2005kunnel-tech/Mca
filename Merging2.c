#include<stdio.h>
int main()
{
	int a[10],b[10],c[20];
	int m,n,i;
	printf("Enter the first array size: ");
	scanf("%d", &m);
	printf("Enter the elements of first array:\n ");
	for(i=0;i<m;i++)
	{
		scanf("%d", &a[i]);
		c[i] = a[i];
	}	
	printf("Enter the second array size: ");
	scanf("%d", &n);
	printf("Enter the elements of second array:\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
		c[m+i] = b[i];
	}
	printf("Merged array:\n ");
	for(i=0;i<n+m;i++)
	{
		printf("%d", c[i]);
	}
	return 0;
}
