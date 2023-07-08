#include <stdio.h>
#include <stdlib.h>
int obeb();
int okek();
int main()
{
    int a,b;
    printf("Lutfen  Degerleri giriniz\na:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("Obeb:%d\n",obeb(a,b));
    printf("Okek:%d",okek(a,b));


    return 0;
}
int obeb(int n1,int n2)
{
    if(n1>n2)
        {
        int bolum=n1/n2;
        int remain=n1-n2*bolum;
        if(remain!=0)
            return obeb (n2,remain);
        else return n2;
    }
    else
        {
        int bolum=n2/n1;
        int remain=n2-n1*bolum;
        if(remain!=0)
            return obeb (n1,remain);
        else return n1;
        }
    }




int okek(int n1,int n2)
{
    return n1*n2/obeb(n1,n2);
}
