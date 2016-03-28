#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(int x[10],int first,int last)
{
	int pivot,j,temp,i;

	if(first<last)
	{
         	pivot=first;
         	i=first;
         	j=last;

         	while(i<j)
		{
             		while(x[i]<=x[pivot]&&i<last)
                 		i++;
             		while(x[j]>x[pivot])
                 		j--;
             		if(i<j)
			{
                 		temp=x[i];
                  		x[i]=x[j];
                  		x[j]=temp;
             		}
         	}

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    	}
}

 

int main() 
{
    int n, k, i, count,sum=0,ctr=0;
    scanf("%d%d", &n, &k);
    int *prices = (int *)malloc(sizeof(int)*n);
    
	for(i=0; i<n; i++) 
    	{
        	scanf("%d", &prices[i]);
    	}

	quicksort(prices,0,n-1);
   
       printf("Sorted elements: ");
  
	for(i=0;i<n;i++)
    	{
		printf(" %d",prices[i]);
		sum += prices[i];
		if(sum < k)
			ctr++;
		else
			break;
			
	}	
	printf("%d\n",ctr);
    return 0;
}


