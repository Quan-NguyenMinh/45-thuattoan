//Tìm SNT có N chu so voi N nhap tu ban phim va 2<= N <= 10
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

long long int nhanbinhgphuong(long long a, long long k, long long n){
	long long int i,j=0;
	while(pow(2,j+1)<=k){
		j++;
	}
	long long int K[j],A;
	A=k;
	for(i=0;i<=j;i++){
		K[i]=A%2;
		A=A/2;
	}
	long long int b=1;
	if(k==0) return b;
	else{
		A=a;
		if(K[0]==1) b=a;
		for(i=1;i<=j;i++){
			A=(long long)pow(A,2)%n;
			if(K[i]==1) b=(A*b)%n;
		}
	}
	return b;
}
int fermat(long long int N,long long int t)
{
	int KT;
	for (long long int i=1;i<=t;i++)
	{
		long long a=2 + rand() % (N-1);
		long long int k=N-1;
		long long int r= nhanbinhgphuong(a,k,N);
		
		if(r!=1)
		KT=0;
		else
		KT=1 ;	
    }
    return KT;
}
int main()
{
	int t,N;
	printf("Nhap tham so an toàn t>= 1: ");
	scanf("%d",&t);
	do
	{
		printf("Nhap N thoa man 2<= N >= 10: ");
	scanf("%d",&N);
	}while(N<2 || N>10);
	
	for(long long i=pow(10,N-1);i<= pow(10,N)-1;i++)
	{
		if(fermat(i,t)==1){
			printf(" %lld",i);
		}
	}
	
}
