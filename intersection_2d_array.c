#include<stdio.h>
#include<stdlib.h>


int main()
{

	int arr_1[]={1, 2, 4, 5, 6};
	int arr_2[]={2, 3, 5, 7};

	int m,n,i,j;
	
	m = sizeof(arr_1)/sizeof(arr_1[0]);
	n = sizeof(arr_2)/sizeof(arr_2[0]);
	
	i=0;
	j=0;
	printf("\n Printing intersection");
	while(i<m && j<n)
	{
		if(arr_1[i] < arr_2[j])
		{i++;}
		else if(arr_1[i] > arr_2[j])
		{j++;}
		else
		{
		  printf("\n %d",arr_1[i]);
		  j++;	
		}
	}

	printf("\n End of the code");



return 0;
}
