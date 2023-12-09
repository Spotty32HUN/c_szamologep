#include <stdio.h>

long osszead(long szam1, long szam2);
long kivon(long szam1, long szam2);
long szoroz(long szam1, long szam2);
long oszt(long szam1, long szam2);

int main()
{
    long eredmeny, szam1, szam2;
    unsigned short muvelet;

    printf("1 - osszeadas\n2 - kivonas\n3 - szorzas\n4 - osztas\n\n");

    printf("Ird be az elso szamot: ");
    scanf("%ld", &szam1);

    printf("Ird be az elso szamot: ");
    scanf("%ld", &szam2);

    printf("Ird be a muveletet: ");
    scanf("%hu", &muvelet);

    switch (muvelet)
    {
    case 1:
        eredmeny = osszead(szam1, szam2);
        printf("%ld", eredmeny);
        break;

    case 2:
        eredmeny = kivon(szam1, szam2);
        printf("%ld", eredmeny);
        break;

    case 3:
        eredmeny = szoroz(szam1, szam2);
        printf("%ld", eredmeny);
        break;   

    case 4:
        eredmeny = oszt(szam1, szam2);
        printf("%ld", eredmeny);
        break; 
    
    default:
        printf("Helytelen muvelet");
        break;
    }

    return 0;
}

long osszead(long szam1, long szam2)
{
    return szam1 + szam2;
}

long kivon(long szam1, long szam2)
{
    return szam1 - szam2;
}

long szoroz(long szam1, long szam2)
{
    return szam1 * szam2;
}

long oszt(long szam1, long szam2)
{
    return szam1 / szam2;
}