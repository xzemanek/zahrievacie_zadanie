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

void zjednotenie(int A[], int B[], int C[], int *x)
{
	int i, y, k=*x;
	
	for(i=0;i<5;i++)
	{
		C[i]=A[i];
	}
	
	for(i=0;i<5;i++)
	{
		y=zhoda(A, B[i]);
	
		if(y==0)
		{
			C[k]=B[i];
			k++;
		}
	}
	*x=k;
}

void prienik(int A[], int B[], int D[],int *z)
{
	int i, y, m=*z;
	
	for(i=0;i<5;i++)
	{
		y=zhoda(A, B[i]);
		
		if(y=!0)
		{
			D[m]=B[i];
			m++;
		}
	}
	*z=m;
}

main()
{
	int A[5], B[5], C[10], D[5],i, x=5, z=0;
	nacitaj_pole(A);
	nacitaj_pole(B);
	
	zjednotenie(A,B,C,&x);
	prienik(A,B,D,&z);
	
	for(i=0;i<x;i++)
	{
		printf("%d  ",C[i]);
	}
	
	printf("\n");
	
	for(i=0;i<z;i++)
	{
		printf("%d  ",D[i]);
	}
	
}
