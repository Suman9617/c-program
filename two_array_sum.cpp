#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={9,8,7,6,5,4,3,2,1};
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	#include<stdio.h>

	for(int k=0;k<3;k++)
	{
		for(int r=0;r<3;r++)
		{
			printf("%d\t",c[k][r]);
		}
			printf("\n");
	}
	//printf("\n")
}

