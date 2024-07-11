//Câu 11:Viet chuong trinh tinh tong cac so nguyen to nho hon hoac bang N 

#include<stdio.h>
int main()
{
	long long n,i,j,A[10000];
	printf("Nhap n: ");
	scanf("%lld", &n);
	long long TongSNT=0;
	int p=2;
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
  		TongSNT += i;
	}
  }
  
  printf("Vay tong cac so nguyen to nho hon hoac bang %lld la %lld",n,TongSNT);
}
