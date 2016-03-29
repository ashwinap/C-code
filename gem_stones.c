#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void call_func(char str[], int j, int arr[])
{
	int len=strlen(str);
	int index=0;
	for(int i=0; i<len; i++)
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
			index = str[i] - 'a';
			if(arr[index] == j-1)
				arr[index] += 1;
		}
	}	

//return arr;
}

int main()
{
	int N,ctr=0;
	char str[100];
	int arr[26]={0};
	scanf("%d",&N);
	int j=1;
	for(int i=0; i<N; i++)
	{
		scanf("%s",str);
		call_func(str,j,arr);
		j++;
	}

	//printf("\n-----output----\n");
	for(int k=0; k<26; k++)
	{
		//printf("%d\n",arr[k]);
		if(arr[k] == N)
			ctr++;
	}

		printf("%d",ctr);
return 0;
}
