#include<stdio.h>
int main(){
	int a[3][3];
	int b[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(int k=0;k<3;k++)
	{
		for(int r=0;r<3;r++)
		{
			b[r][k]=a[k][r];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
