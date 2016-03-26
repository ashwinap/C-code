#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10],new_arr[10];
	int n,i,j;
	printf("\n Enter the number N");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("\n Enter the arr[%d]:",i);
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++)
	{	
		new_arr[i] = 1;
		for(j= 0; j< n; j++)
		{	
			if(i != j)
				new_arr[i] *= arr[j];
		}
	}
	
	printf("\n -------OUTPUT---------\n");
	for(i=0; i<n; i++)
		printf(" %d",new_arr[i]);
	printf("\n");
	
return 0;
}
