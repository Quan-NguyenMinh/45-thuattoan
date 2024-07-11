//Câu 14:Tim so nguyen to có 3 chu so biet neu viet so do theo thu tu nguoc lai thi ta dc mot so la lap phuong cua mot so tu nhien

#include<stdio.h>
#include <math.h>
#include <stdbool.h>

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
int kiemtraSNT(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
		
bool KT_lap_phuong(int num) {
    int k = (int)round(cbrt(num));    // ham cbrt : ham can bac 3   ham round la ham lam tron
    return pow(k,3) == num;
}
int main()
{
	
	printf("Cac so can tim la: ");
	for(long long i=100;i<1000;i++)
	{
		if(kiemtraSNT(i)==1)
		{
			long long x=dao_nguoc_vi_tri(i);
			if(KT_lap_phuong(x))
			{
				printf("%lld ",i);
			}
			
		}
	}
	
}
	
