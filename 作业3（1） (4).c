#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{	for(j=0;j<n-1-i;j++) printf(" ");
		for(j=0;j<2*i+1;j++) printf("%d",(j+i)%10);
		printf("\n");
	}	
}
