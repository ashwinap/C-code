#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int maxXor(int l, int r) 
{
	int i,j;
	int num=0,value;
	for(i=l; i<=r; i++)
	{
		for(j=l; j<=r; j++)
		{
			value = i^j;
			if(num < value)
			{
				num = value;
			}	
		}
	}
	
return num;
}
int main() 
{
    int res;
    int _l;
    printf("\n Enter the l value");
    scanf("%d", &_l);
    
    int _r;
    printf("\n Enter the r value");
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}


