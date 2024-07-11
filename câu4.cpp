#include<stdio.h>
int main()
{
	int A,B, C[1000],i,j;
	int dem_SNT=0;
	printf("Nhap A,B: ");
	scanf("%d %d",&A,&B);
	int p=2;
 for(i=A;i<=B;i++)
  {
	C[i]=1;
  } 
  
  for( i=A;i<=B;i++)
  {
  	for( j=2;j<B;j++)
  	{
  	 C[j*p]=0;
  	 if(j*p>=B)
  	{
  		break;
	  }
   }
   p++;
  }
  for(i=A;i<=B;i++)
  {
  	if(C[i]==1)
  	{
  		dem_SNT++;
	  }
  }
  printf("Co %d SNT nam trong [%d ,%d]",dem_SNT,A,B);
}
