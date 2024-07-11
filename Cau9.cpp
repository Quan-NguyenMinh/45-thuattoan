//Cau9 :Viet chuong trinh dem so nguyen to nho hon hoac bang N

#include<stdio.h>

long long int i,n,p,j;
long long int A[100000000];
long long dem=0;

long long Sang_nguyen_to(long long n)
{
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
  		dem++;;
	}
  }
 return dem; 
}

int main()
{
	long long N;
	printf("Nhap N ");
	scanf("%lld",&N);
	long long K=Sang_nguyen_to(N);
	printf("Co %lld so nguyen to nho hon hoac bang %lld",K,N);	
}

