#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void binary_to_decimal(int num[])
{
	long long int i,j=0,sum=0;
 	for(i=31; i>=0; i--)
        {
                if(num[i] != 0)
                {
                    sum += pow(2,j);
                }  
                
                j++;            
        }
       	
	printf("\n Decimal value= %lld\n",sum);
}

int main()
{
  	int n, c, k,i=0;
	int num[32];  
 
 	 printf("Enter an integer in decimal number system\n");
  	scanf("%d", &n);
 
  	printf("%d in binary number system is:\n", n);
 
  	for (c = 31; c >= 0; c--)
  	{
    		k = n >> c;
 
    		if (k & 1)
		{
			num[i]=0;
      			printf("0");
		}
    		else
		{	num[i]=1;
      			printf("1");
		}
		i++;
  	}
 
  printf("\n");
	printf("array oputput:\n ");
	for(i=0; i<32; i++)
		printf("%d",num[i]);
	printf("\n");
	
	binary_to_decimal(num);
 
  return 0;
}
