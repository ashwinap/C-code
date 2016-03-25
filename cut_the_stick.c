#include<stdio.h>
#include<stdlib.h>

int find_min(int arr[],int n)
{
	int minimum=0; // first element
	int j=0;
	while(minimum == 0)
	{
		minimum = arr[j];   // loop to find the first non zero value
		j++;
	}
	if(j < n+1)
	{
		for(int i=0; i<n; i++)
		{
			if(minimum > arr[i] && arr[i] > 0)
				minimum = arr[i];	
		}
	}
	else
		return 0;	
return minimum;
}
int output(int arr[],int n)
{	
	int ctr=0;
	for(int i=0; i<n;i++)
	{
		if(arr[i] !=0)
			ctr++;
	}
	printf("%d\n",ctr);
return ctr;
}
int main()
{
	int i,n,min,j,ctr;
	printf("\n Enter the N value:"); 
	scanf("%d",&n);
	int arr[n];
	
	for(int arr_i = 0; arr_i < n; arr_i++)
	{
		printf("\n Enter the array value: arr[%d]:",arr_i);
		scanf("%d",&arr[arr_i]);
    	}
	
	min = find_min(arr,n);

	for(int i =0; i<n; i++)
	{
		min = find_min(arr,n);
		printf("\n minimum=%d \n", min);
		//STDout
		if(min != 0)
		{	
			ctr = output(arr,n);
			printf("\n Counter =%d \n",ctr);
			// subtract the array with the min elemnet
			for(j=0; j<n; j++)
			{
				if(arr[j] != 0)
					arr[j] = arr[j] - min; 
			}
			printf("\n");
		
			for(j=0; j<n; j++)
				printf(" %d",arr[j]);
			printf("\n");
		}
	}

return 0;
}
