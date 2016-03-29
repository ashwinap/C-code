#include<stdio.h>
 
int main()
{
   int n, first, second, next, c,i ;
   int term[1000];
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
  	printf("First=\n");
   	scanf("%d",&first);
	printf("second\n");
	scanf("%d",&second);
	
	term[0]=first;
	term[1]=second;

	for(i=2; i<=20; i++)
	{
		term[i] = (second * second) + first;
		first = second;
		second = term[i]; 
	}  
	
	for(i=0; i<n; i++)
	{
		if(i == n-1)
			printf("\noutput %d\n", term[i]);
	}
	
   return 0;
}

