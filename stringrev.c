#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int len,i,j;
	char str[100];
	char new_str[] = "hello";
	char *ptr, *end;
	char temp;
	printf("\n Enter the string:");
	scanf("%s",str);
	//ptr = str;
	//end = str;
	
	printf("\n----output---- \n");
	for(i=strlen(str) -1;i>=0; i--)
	{
		
		printf("%c \n",str[i]);
		//ptr++;
	}
/*	
	while(*end)
	{
		end++; 
	}
	end--;
	
	while(ptr < end)
	{
		temp = *end;
		*ptr++ = *end;
		*end-- = temp;
	}		
*/
//printf("\n Output \n %s \n",ptr);
return 0;
}
