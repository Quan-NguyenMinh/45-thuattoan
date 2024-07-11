//Cau20:In ra cap so nam trong (M,N) sao cho UCLN co gia tr la 1 so D cho truoc
// M,N,D nhap tu ban phim (0<M,N,D <1000)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int a, int b)
{
	while(b!=0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

void solve(int a, int b, int d)
{
	for(int i=a; i<=b; i++)
	{
		for(int j=i+1; j<=b; j++)
		{
			if(gcd(i, j) == d)
				printf("%d %d\n", i, j);
		}
	}
}

int main()
{
	int M, N, D;
	printf("Nhap khoang (M, N): ");
	scanf("%d%d", &M, &N);
	printf("Nhap gia tri D: ");
	scanf("%d", &D);
	solve(M, N, D);

	return 0;
}
