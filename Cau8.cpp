/* Cau 8: Mot so dgl T-Prime neu co dung 3 uoc nguyen duong 
Viet chuong trinh tim cac so T_Prime nho hon hoac bang N nhap tu ban phim */

#include <stdio.h>
#include<stdbool.h>
bool check(int x){
int d=2;   // moi so co 2 uoc la 1 va chinh no
for(int i=2;i<=x/2;i++)
{
	if(x %i ==0)
	{
		d++;
	}
}
	return d==3;
}

int main() {
int N;
int d;
do{
printf("Enter the N: ");
scanf("%d",&N);
}while(N<0);
for (int i = 0; i <= N; i++) 
{
	if (check(i))
	{
		printf(" %d", i);
	}
}
 
}

