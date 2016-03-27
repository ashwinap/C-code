#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void binary_to_decimal(int num[])
{
        long long int i,sum=0,j=0;
           

        for(i=31; i>=0; i--)
        {
                if(num[i] != 0)
                {
                    //printf("%d",j);
                    sum += pow(2,j);
                }
		j++;  
        }
        printf("\n");
        printf("%lld\n",sum);
       // printf("\n Decimal value= %lld\n",sum);
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    
      int c, k,i,T;
        
        scanf("%d", &T);
        long long int value[T],n;
        int num[32];
        for(int j=0; j<T; j++)
        {
         printf("Enter an integer in decimal number system\n");
        scanf("%lld", &value[j]);
        }
        for(int z=0; z<T; z++)
        {
            
            i=0;
            n = value[z];
            for (c = 31; c >= 0; c--)
            {
                k = n >> c;

                if (k & 1)
                {
                        num[i]=0;
                       // printf("0"); // inverting the bits
                }
                else
                {       num[i]=1;
                       // printf("1"); // inverting bits
                }
                i++;
            }
        

  printf("\n");
       printf("array oputput:\n ");
        for(i=0; i<32; i++)
                printf("%d",num[i]);
       printf("\n calling function \n");

        binary_to_decimal(num);
        }
    return 0;
}


