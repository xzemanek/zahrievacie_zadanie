#include <stdio.h>

void vypis_pole(int *p, int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{ 
		printf("%d,",p[i]);
		p++;
	}
	printf("\n");
}

void otoc_pole(int *p,int n)
{
	
	
	
}

int main()
{
	int n;
	n=5;
	int A[n];
	
	vypis_pole(A,n);
}



