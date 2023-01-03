// matrix usung of arry

#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Element of Matrix 1:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Element of Matrix 2:");
			scanf("%d",&b[i][j]);
		}
	}


	printf("\nMatrix 1 :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("  %d	",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2 :\n");
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf("  %d	",b[i][j]);
			}
			printf("\n");
	}
	

	printf("\nMatrix :\n");
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				c[i][j]=0;
				
				for(k=0;k<2;k++)
				{
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
					
				}
			}
		printf("\n");
	}
	
	

	
	printf("\n mMultiplication of Matrix  :\n");
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf("  %d	",c[i][j]);
			}
			printf("\n");
	}	

return 0;
}
