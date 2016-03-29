#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int main(void)
 {
    int index, i, pangram;
    char ch, x[26] = {0};
    //printf("Enter a pangram: ");
   char str[1000];
	scanf("%[^\n]s",str);
	 int j=0;
	int len = strlen(str);
	printf("\n sentence length %d \n",len); 
	while (len--)
        {
		ch = str[j];
		printf("%c",ch);
		if('A' <= ch && ch <= 'Z')// Cap letter
            		index = ch-'A';
        	else if('a' <= ch && ch <= 'z') // Not Cap letter
			index = ch-'a';
        	//else
            	//	continue;
 	j++;
    x[index] = 1;
    }
 printf("\n");
    pangram = 1;
	for (i = 0; i < 26; ++i) 
	{
		if (x[i] == 0)
			pangram = 0;
    	}
	
	if(pangram == 1)
	{
        	printf("pangram\n");
	}
	else if(pangram == 0) 
	{
        	printf("not angram\n");
	}
 printf("\n\n");
    return 0;
}
