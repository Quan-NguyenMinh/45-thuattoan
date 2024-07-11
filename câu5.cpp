#include<stdio.h>
int main()
{
	int A,B, C[1000],i,j;
	int Tong_SNT=0;
	printf("Nhap A,B: ");
	scanf("%d %d",&A,&B);

// Thuat toan Sang Nguyen to
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
  		Tong_SNT+= i;
	  }
  }
  printf("Tong cac SNT nam trong [%d ,%d] la %d",A,B,Tong_SNT);
}
