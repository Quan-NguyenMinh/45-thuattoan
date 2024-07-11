#include<stdio.h>
int main()
{
	int N,A[1000],k,q,p,s;
	int i,j;
	k = q = p = s= 0;
	do{
		printf("Nhap N nguyen duong: ");
		scanf("%d",&N);
	}while(N<0);
	
//Thuat toan Sang Nguyen To	
int z=2;  // khoi tao z=2
 for(i=2;i<=N;i++)
  {
	A[i]=1;
  } 
  
  for(i=2;i<=N;i++)
  {
  	for(int j=2;j<=N;j++)
  	{
  	 A[j*z]=0;
  	 if(j*z>=N)
  	{
  		break;
	  }
   }
   z++;
  }
  
  
  for(i=2;i<=N;i++)
  {
  	if(A[i]==1 && N % i==0)
  	{
  		k++;
  		q+= i;
	  }
  }
  
  for(i=1;i<=N;i++)
  {
  	if(N%i ==0){
  		p+= i;
  		s++;
	  }
  }
 
  int Gia_Tri;
  Gia_Tri=N+p+s-q-k;
  printf("Gia tri cua N+p+s-q-k là :%d",Gia_Tri);	
}

