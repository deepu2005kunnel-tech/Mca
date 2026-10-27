#include<stdio.h>
int main()
{
	int a[10],b[10],c[20];
	int m,n,i,j,k;
	printf("Enter the first array size: ");
	scanf("%d", &m);
	printf("Enter the elements of first array: ");
	for(i=0;i<m;i++)
	{
		scanf("%d", &a[i]);
	}	
	printf("Enter the second array size: ");
	scanf("%d", &n);
	printf("Enter the elements of second array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
	i=0;
	j=0;
	k=0;
	
	while(i<m && j<n)
	{
		if(a[i] < b[i])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}
	while(i < m)
	{
		c[k] = a[i];
		i++;
		k++;
	}
	while(j < n)
	{
		c[k] = b[j];
		j++;
		k++;
	}
	printf("Merged array: ");
	for(i = 0;i < m + n; i++)
	{
		printf("%d", c[i]);
	}
	return 0;
	
	
}
