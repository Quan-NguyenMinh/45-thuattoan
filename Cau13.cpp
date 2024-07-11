//Câu 13: Tim hai so nguyen to nho hon hoac bang N sao cho tong va hieu cua chung deu la SNT
#include<stdio.h>
int kiemtraSNT(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
int main(){
	long long i, j, n;
    long long A[100000], B[100000];
    long long k = 0;
    long long Tong,Hieu;
    
    printf("Nhap n: ");
    scanf("%lld", &n);
 
 
 //Sang snt
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
  		B[k]=i;
  		k++;                                               // k la dem so nguyen to
	  }
  }
  
  printf("Cac cap so can tim la ");
  for(i=0;i<k;i++){
  	for(j=i+1;j<k;j++)
  	{
  		Tong= B[i] + B[j];
  		Hieu= B[j] - B[i];
		if(kiemtraSNT(Tong)==1 && kiemtraSNT(Hieu)==1)
		{
			printf("(%lld , %lld) ",B[i],B[j]);
			  }  	
	  }
  }
 
    return 0;
}


