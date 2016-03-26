#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	
	int len, i, j, k, ctr;
	char str[100];
	printf("\n Enter the string:");
	scanf("%s",str);
	
	len = strlen(str);
	printf("\n -------OUTPUT------------\n");
	for(i=0; i<len; i++)
	{

		for(j=0; j<len; j++)
		{
			if(i != j)
			{
				if(str[i] == str[j])
				{
					str[j] = '~';
				}				
				
			}
		}
	}
	printf("\n");
	for(i=0; i<strlen(str);i++)
		if(str[i] != '~')
			printf("%c",str[i]);
	printf("\n");


return 0;
}
