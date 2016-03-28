#include<stdio.h>
#include<stdlib.h>

int main()
{
	int s,N,i;
	scanf("%d",&s);
	scanf("%d",&N);
	int arr[N];
	for(i=0; i<N; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0; i<N; i++)
	{
		if(arr[i] == s)
			break;
	}
	printf("%d",i);
return 0;
}
