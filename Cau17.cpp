/*Tim so nguyen duong x min va nho hon N nhap tu ban phim sao cho
Ax^2 + Bx + C la so nguyen to voi A,B,C la ca so nguyen nhap vao tu ban phim */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

int miller_rabin(long long n,int t)
{
	long long r=n-1;
	int s=0;
	while(r%2==0){
		r /= 2;
		s++;
	}
	for(int i=1;i<=t;i++)
	{
		int a=2+ rand() % (n-3);
		long long int y=nhanbinhgphuong(a,r,n);
		if(y!=1 && y!= n-1)
		{
			int j=1;
			while(j<=s-1 && y != n - 1){
			y = (y * y) % n;
                if (y == 1) {
                    return 0; //hop so	
			               }
			j++;
		}
		if (y != n - 1) 
                return 0; // hop so
	   }
	return 1; //nguyen to	
   }
}
int main()
{
	int n,x,A,B,C,t;
	
	
	printf("Nhap so n: "); scanf("%d",&n);
	printf("Nhap A: "); scanf("%d",&A);
	printf("Nhap B: "); scanf("%d",&B);
	printf("Nhap C: "); scanf("%d",&C);	
	
	printf("Nhap tham so an toan t ");
	scanf("%d",&t);
	
	for(x=1;x<n;x++)
	{
		long long S= A*x*x + B*x+C;
		if(miller_rabin(S,t)==1)
		{
			printf("%d",x);
			 break;   //khi xh gia tri x dau tien thoa man thi thoat vong lap
		}
	}
}

