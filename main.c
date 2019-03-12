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

main()
{
	int A[5]={}, B[5]={};
	nacitaj_pole(A);
	nacitaj_pole(B);
	
}
