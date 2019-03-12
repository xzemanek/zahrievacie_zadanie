#include <stdio.h>

void nacitaj_pole(int A[])
{
	int i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\n");
}

int zhoda(int A[], int b)
{
	int i, pocitadlo=0;
	
	for(i=0;i<5;i++)
	{
		if(b==A[i])
		{
			pocitadlo++;
		}
	}
	return pocitadlo;
}

void zjednotenie(int A[], int B[], int C[])
{
	int i, x=5, y;
	
	for(i=0;i<5;i++)
	{
		C[i]=A[i];
	}
	
	for(i=0;i<5;i++)
	{
		zhoda(A, B[i]);
		
		if(y==0)
		{
			C[x]=B[i];
			x++;
		}
	}
}



main()
{
	int A[5]={}, B[5]={}, C[10]={};
	nacitaj_pole(A);
	nacitaj_pole(B);
	
}
