/*Mot so emirp la mot so nguyen to ma khi dao nguoc vi tri  cac chu so cua no ,ta cung duoc mot so nguyen to.
Viet chuong trinh liet ke cac ca so Emirp nho hon N nhap tu ban phim */

#include<stdio.h>
long long dao_nguoc_vi_tri(long long N)
{
	long long so_dao_nguoc=0;
	while(N !=0)
	{
		so_dao_nguoc=so_dao_nguoc*10+ N%10;  // them chu so cuoi cua N vao so dao nguoc
		N /=10;                            //bo chu so cuoi cua N
	}
	return so_dao_nguoc;
}
void Sang_nguyen_to(long long n)
{
	int p=2;
	long long A[10000];
 for(int i=2;i<=n;i++)
  {
	A[i]=1;
  } 
  
  for(int i=2;i<=n;i++)
  {
  	for(int j=2;j<=n;j++)
  	{
  	 A[j*p]=0;
  	 if(j*p>=n)
  	{
  		break;
	  }
   }
   p++;
  }
  for(int i=2;i<=n;i++)
  {
  	if(A[i]==1)
  	{
  		printf("%lld ",i);
	  }
  }
}

int main()
{
	long long N;
	printf("Nhap N: ");
	scanf("%lld", &N);
	long long K=dao_nguoc_vi_tri(N);
	printf("%lld \n",K); //test thu xem ham dao nguoc dung chua
	Sang_nguyen_to(K);	
}
