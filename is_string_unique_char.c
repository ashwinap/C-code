#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	
	int len, i, j, k, ctr=0;
	char str[100];
	printf("\n Enter the string:");
	scanf("%s",str);
	
	len = strlen(str);
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<len; j++)
		{
			if(i != j)
			{
				if(str[i] == str[j])
				{
					ctr++;
					break;
				}
			}
		}
	}
	
	if(ctr == 0 )
		printf("\n Its  an Unique char string \n");
	else
		printf("\n String has repetitve char \n");
	
return 0;
}
