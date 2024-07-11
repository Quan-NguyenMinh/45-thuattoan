//Cau 16:Tim cac SNT tu mot mang sinh ngau nhien co kich thuoc N.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void randomArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 9999 + 1;   //mang ngau nhien tu 1 den 9999
    }
}

void printArray (int a[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}
int isPrime(int n)
{
	if(n < 2)
		return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n, a[10000];
	printf("Nhap n: ");
	scanf("%d", &n);
	
	randomArray(a, n);
	printf("Mang sinh ngau nhien:\n");
	printArray(a, n);
	
	printf("\nCac so nguyen to trong mang\n");
	for(int i=0; i<n; i++)
	{
		if(isPrime(a[i]))
			printf("%d  ", a[i]);
	}
	return 0;
}
