#include<stdio.h>
#include<stdlib.h>



int main()
{
	int i,n,tot, v_sum, result;
	int v[] = {4,2,1,5};
	
	n=5;
	//v = {4,2,1,5};
	
	v_sum = 0;	
	tot = (n * (n+1))/2;
	
	printf("\n Total = %d \n",tot);	
	for(i=0; i < n-1; i++)
	{
		v_sum += v[i];
	}
	
	result = tot - v_sum;
	
	printf("\n The ouput is %d \n",result); 
}

