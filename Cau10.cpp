//Cau10: Viet chuong trinh dem so uoc và so uoc nguyen to cua N nhap tu ban phim

#include<stdio.h>
int main()
{
	long long n, A[100000],so_uoc, so_uoc_nguyen_to;
	
	so_uoc = so_uoc_nguyen_to=0;
	printf("Nhap so n duong "); 
	scanf("%d",&n);
	
	//Sang nguyen to
	int p=2;
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
    //so uoc nguyen to
  for(int i=2;i<=n;i++)
  {
  	if((A[i]==1) && (n%i==0))
  	{
  		so_uoc_nguyen_to++;
	  }
   }
   
   //so uoc
   for(int i=1;i<=n/2;i++)
   {
   	if(n%i==0)
   	{
   		so_uoc++;
	   }
   }
   
   printf("Vay so uoc la %lld \nSo uoc nguyen to la %lld",so_uoc,so_uoc_nguyen_to);
}
