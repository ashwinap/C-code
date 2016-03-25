#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int value[10];
int * solution(int A[],int N)
{
	int i,lhs=0,rhs=0,j,k=0;
	//int value[10];
	
	for(i=0; i<N; i++)
	{
		lhs += A[i];
		printf("\n LHS %d",lhs);
		rhs=0;
		for(j=i+2; j<N; j++)
		{
			rhs +=A[j];
		}
		printf("\t RHS %d",rhs);
		if(lhs == rhs)
		{
			printf("\n Entered value");
			value[k] = i+1;
			k++;
		}
		else
		{
			printf("\n Entered -1");
			value[k] = -1;
			k++;
		}
		if(i == N)
		{
			rhs=0;
		}
		
	}


	printf("\n Output-- \n");
	
	for(int i=0; i<sizeof(value)/sizeof(value[0]); i++)
	{
		printf("\n %d", value[i]);
	}
return 0;
}

int main()
{
	int A[] = {-1,3,-4,5,1,-6,2,1};
	int N = sizeof(A)/sizeof(A[0]);
	int *res;

	printf("\n Starting the code...\n");
	res = solution(A, N);

	printf("\n Output-- \n");
	
	for(int i=0; i<sizeof(res)/sizeof(res[0]); i++)
	{
		printf("\n %d",res[i]);
	}
	printf("\n");
return 0;
}
