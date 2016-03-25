#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t; 
	printf("\n Enter the T:");
	scanf("%d",&t);
	int num[t];
	char buffer[10];
	int div, counter,j=0;
	for(int a0 = 0; a0 < t; a0++)
	{
		int n; 
		printf("\n Enter the N");
		scanf("%d",&n);
		
		sprintf(buffer,"%d",n);

		printf("\n Output");
		printf("%s",buffer);
		
		printf("\nsize=%ld",strlen(buffer));
		
		printf("\n -- output--- \n");
		counter = 0;
		for(int i=0; i<strlen(buffer); i++)
		{
			printf("\n%d",buffer[i] - 48);
			div = buffer[i] - 48;
			if(div !=0 )
			{
				if((n % div) == 0)
				counter++;
			}
			
		}
		printf("\n Counter value");
		num[j] = counter;
		j++;
	}	
	

	printf("\n =-----------Hack rank output---------");
	for(int i =0; i < t; i++)
		printf("%d\n", num[i]);
	

return 0;
}
