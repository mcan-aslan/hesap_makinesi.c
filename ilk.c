#include <stdio.h>
#include <math.h>

int alan(int kenar1 , int kenar2);
int top(s1,s2);
int cik(s1,s2);
int bol(s1,s2);
int carp(s1,s2);
int us_al(s1,s2);


int main()
{
    int sec,kenar1,kenar2,s1,s2;
    while (1)
    {
        printf("\n1)Alan Hesaplama(kare-dikdortgen)\n2)Toplama\n3)Cikarma\n4)Bolme\n5)Carpma\n6)Ust Alma\n");
        printf("Yapacaginiz Islemi Secin: ");
        scanf("%d",&sec);

        if (sec==1)
        {
            alan(kenar1,kenar2);
        }
        else if (sec==2)
        {
            top(s1,s2);
        }
        else if (sec==3)
        {
            cik(s1,s2);
        }
        else if(sec==4)
        {
            bol(s1,s2);
        }
        else if(sec==5)
        {
            carp(s1,s2);
        }
        else if(sec==6)
        {
            us_al(s1,s2);
        }
        else
        {
            printf("cikiliyor...");
            break;
        }
    }

    return 0;
}

int alan(kenar1 , kenar2)
{
    printf("Kenar 1 ve 2'yi girin: ");
    scanf("%d %d",&kenar1,&kenar2);
    int result = kenar1 * kenar2;
    printf("Alan Sonucunuz: %d",result);
    return 0;
}

int top(s1,s2)
{
    printf("toplamak istediginiz sayilari girin: ");
    scanf("%d %d",&s1,&s2);
    int result = s1 + s2;
    printf("Toplama Sonucunuz: %d ",result);
    return 0;
}
int cik(s1,s2)
{
    printf("Cikarmak Istediginiz Sayilari Girin: ");
    scanf("%d %d",&s1,&s2);
    int result =    s1 - s2;
    printf("Cikarma Sonucunuz: %d",result);
    return 0;
}
int bol(s1,s2)
{
printf("Bolmek Istediginiz Sayilari Girin: ");
scanf("%d %d",&s1,&s2);
int result =    s1 / s2;
printf("Bolme Sonucunuz: %d",result);
return 0;
}
int carp(s1,s2)
{
    printf("Carpmak Istediginiz Sayilari Girin: ");
    scanf("%d %d",&s1,&s2);
    int result =    s1 * s2;
    printf("Carpma Sonucunuz: %d",result);
    return 0;
}
int us_al(s1,s2)
{
    printf("Sayilari Girin(once taban): ");
    scanf("%d %d",&s1,&s2);
    int result =    pow(s1,s2);
    printf("Cikarma Sonucunuz: %d",result);
    return 0;
}