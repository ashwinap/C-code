#include<stdio.h>
#include<stdlib.h>


 int main(void)
 {
    int index, i, pangram;
    char ch, x[26] = {0};
    //printf("Enter a pangram: ");
    
	while ((ch = getchar()) != '\n')
        {
		if('A' <= ch && ch <= 'Z')// Cap letter
            		index = ch-'A';
        	else if('a' <= ch && ch <= 'z') // Not Cap letter
			index = ch-'a';
        	else
            		continue;
 
    x[index] = 1;
    }
 
    pangram = 1;
	for (i = 0; i < 26; ++i) 
	{
		if (x[i] == 0)
			pangram = 0;
    	}
	
	if(pangram == 1)
	{
        	printf("Pangram\n");
	}
	else if(pangram == 0) 
	{
        	printf("not Pangram\n");
	}
 printf("\n\n");
    //system("PAUSE");// system("PAUSE"); is just for windows
    return 0;
}
