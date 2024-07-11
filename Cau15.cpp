/*Câu 15:Hai so nguyen to sinh doi la hai so nguyen to hon kem nhau 2 don vi.
Tim 2 snt sinh doi nho hon N */

#include<stdio.h>

int main()
{
long long i,n,p,j;
long long  A[100000],B[100000];
long long k=0;

printf("\nNhap n: ");
scanf("%d",&n);
 
 //Sang  nguyen to
 p=2;
 for(i=2;i<=n;i++)
  {
	A[i]=1;
  } 
  
  for(i=2;i<=n;i++)
  {
  	for(j=2;j<=n;j++)
  	{
  	 A[j*p]=0;
  	 if(j*p>=n)
  	{
  		break;
	  }
   }
   p++;
  }
  for(i=2;i<=n;i++)
  {
  	if(A[i]==1)
  	{
  		B[k]=i;
  		k++;    // dem so nguyen to
	  }
  }
  
  for(i=1;i<k;i++)
  {
  	int check= B[i]-B[i-1];
  	if(check==2)
  	{
  		printf("(%lld ,%lld)\n ",B[i-1],B[i]);
	  }
  }
  
}
