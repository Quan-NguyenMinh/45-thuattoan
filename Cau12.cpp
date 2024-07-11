//Cau12:Tim 4 so nguyen to lien tiep sao cho tong cua chung la SNT nho hon hoac bang N

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool KT_snt(long long n) {
    if (n <= 1) return false;    
    if (n == 2) return true;     
    if (n % 2 == 0) return false;      // loai cac so chan lon hon 2
    
    // Kiem tra ca so le tu 3 den can n
    for (long long int i = 3; i<= sqrt(n); i += 2) {
        if (n % i == 0) return false;  // neu n chia het cho i thi ko la SNT
    }
    return true;  // neu khong tim thay uoc nao thi n la so nguyen to
}
int main()
{
	long long i, j, n;
    long long A[100000], B[100000];
    long long k = 0, Tong;
    
    printf("Nhap n: ");
    scanf("%lld", &n);
 
 
 //Sang snt
 int p=2;
 for(i=2;i<=n;i++)
  {
	A[i]=1;
  } 
  
  
  for(i=2;i<=n;i++)
  {
  	for(j=2;j<=n;j++)
  	{
  	 A[j*p]=0;
  	 if(j*p>=n)
  	{
  		break;
	  }
   }
   p++;
  }
  
  for(i=2;i<=n;i++)
  {
  	if(A[i]==1)
  	{
  		B[k]=i;
  		k++;                                               // k la dem so nguyen to
	  }
  }
  //Tinh tong 4 so nguyen to lien tiep
  for(i=0;i<k-4;i++)                                       // K-4 vi de dam bao luon co 4 SNT lien tiep de kiem tra
  {
        Tong=B[i] + B[i+1] +B[i+2] +B[i+3];                // vd: có k=10 SNT (chi so tu 0 den 9) i=6 thi co du 4 so i=6 , 7, 8, 9  neu i=7 thi ko co 4 so lien tiep i=7,8,9,10 vuot qua K
  	    
		  
		if(Tong<= n && KT_snt(Tong) )
  	    {
  	    	printf("4 so nguyen to can tim la %lld %lld %lld %lld",B[i],B[i+1],B[i+2],B[i+3]);
		  }
  }
    return 0;
}


