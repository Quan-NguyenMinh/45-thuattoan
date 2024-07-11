#include<stdio.h>
#include<stdbool.h>
bool Q_prime(long long x)
{
     int d=2;
     for(int i=2 ; i<=x/2 ; i++)
     {
     	if(x % i ==0)
     	{
     		d++;
		 }
	 }
	 return d==4;
} 
int main(){
	long long N;
	do
	{
		printf("Nhap N:");
		scanf("%lld",&N);
	}
	while(N<0);
	
	for(long long i=0;i<=N;i++)
	{
		if( Q_prime(i)){
			printf("%lld ",i);
		}
	}
}

