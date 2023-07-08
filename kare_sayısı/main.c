#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int kare_sayisi(int x);
int main(void)
{
    while(1)
    {
        int n;
        printf("Lutfen kenar sayisini yazin: \n");
        scanf("%d",&n);
        printf("Toplam Kare Sayisi:%d \n",kare_sayisi(n));
    }

}
int kare_sayisi(int x)
{
    if(x==0)
        return 0;
    return x*x+kare_sayisi(x-1);

}

