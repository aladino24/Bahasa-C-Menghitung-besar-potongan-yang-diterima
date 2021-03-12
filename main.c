#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x;
   printf("Harga Pembelian= Rp ",&x);
   scanf("%d",&x);
   if(x<100000)
    printf("Total Pembelian adalah Rp %d \n",x);
    printf("Anda tidak mendapat diskon");
   if(x>=100000)
   printf("\n Potongan Harga= Rp %d\n\t Total Pembelian=Rp %d ",x*5/100,x-x*5/100);
}
