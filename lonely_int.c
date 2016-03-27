#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int a_size, int* a) 
{
	int num = a[0];
	int i;
	for(i=1; i<a_size; i++)
	{
		num = num ^ a[i];
	}

return num;
}
int main() 
{
	int res;
    
    	int _a_size, _a_i;
	printf("\n Enter the array size");

    	scanf("%d", &_a_size);
    	int _a[_a_size];
    
	for(_a_i = 0; _a_i < _a_size; _a_i++) 
	{ 
        	int _a_item;
        	printf("\n Enter element- %d:", _a_i);
		scanf("%d", &_a_item);
        
        	_a[_a_i] = _a_item;
	}
    
    res = lonelyinteger(_a_size, _a);
    printf("\n -----output--------   ");
    printf("%d", res);
	printf("\n");
    
    return 0;
}


