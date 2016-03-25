#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,i,student_made_it,j=0;	
	int num[100];
   		printf("\n Enter T");
	scanf("%d",&t);
    
	for(int a0 = 0; a0 < t; a0++)
	{
        	int n; 
        	int k;
		student_made_it =0; 
		printf("\n Enter n and K");
        	scanf("%d %d",&n,&k);
        	int a[n];
		printf("\n Enter the %d students",n);
        
		for(int a_i = 0; a_i < n; a_i++)
		{
           		scanf("%d",&a[a_i]);
        	}
            
		for(i=0; i<n; i++)
            	{
                	if(a[i] <= 0)
                	{ 
				student_made_it = student_made_it + 1;
				printf("\n Students count %d",student_made_it);
                	}
            	}
            
        
            	if(student_made_it >= k)
            	{
                	printf("NO\n");
			num[j]= 1;
            	}
            	else
            	{
			num[j]=2;
                	printf("YES\n");
            	}
			j++;
        }
	
	printf("\n--------------------------\n");
	for(i=0; i<t; i++)
	{
		if(num[i] == 1)
		printf("NO\n");
		else
		printf("YES\n");
	}
    
   
    return 0;
}


