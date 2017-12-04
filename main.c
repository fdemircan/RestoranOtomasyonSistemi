#include <stdio.h>
#include <stdlib.h>

int main()
{

    int secim,secilen_masa1,secilen_masa2,i,toplam1=0,toplam2=0;
    int masa[10]= {0};
    char secim2;
    do
    {
        system ("COLOR 31");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t************KALAMIS RESTORANINA HOSGELDINIZ************\n");
        printf("\t\t\t*****MENU*****\n");
        printf("Ilk 5 masa sigara icilen bolume ait, diger 5 masa icilmeyen bolume aittir.");
        printf("Tum masalari listelemek icin 1'e basiniz.\n");
        printf("Sigara icilen bolumdeki masalari listelemek ve rezervasyon yapmak icin 2'ye basiniz.\n");
        printf("Sigara icilmeyen bolumdeki masalari listelemek ve rezervasyon yapmak icin 3'e basiniz.\n");
        printf("Menuden cikmak icin 4'e basiniz.\n");
        printf("\n");
        printf("\n");
        printf("\n");

        printf("Lutfen seciminizi yapiniz:");
        scanf("%d",&secim);

        switch (secim)
        {
        case 1:
            for (i=0; i<10; i++)
            {
                if (masa[i]==0)
                    printf("%d. masa:BOS\n",i+1);
                else
                    printf("%d. masa:DOLU\n",i+1);
            }
            break;

        case 2:

            for (i=0; i<5; i++)
            {
                if (masa[i]==0)
                    printf("%d. masa:BOS\n",i+1);
                else
                    printf("%d. masa:DOLU\n",i+1);
            }
            toplam1=masa[0]+masa[1]+masa[2]+masa[3]+masa[4];
            if (toplam1==5)
            {
                printf("Sectiginiz masalar doludur.Sigara icilmeyen bolumden rezerve etmek ister misiniz?");
                scanf(" %c",&secim2);
                if (secim2=='e'||secim2=='E')
                {
                    printf("Lutfen rezerve etmek istediginiz masayi seciniz:");
                    scanf("%d",&secilen_masa2);

                    if (masa[secilen_masa2-1]==0)
                    {
                        masa[secilen_masa2-1]=1;
                        printf("Rezarvasyonunuz %d. masaya yapilmistir.",secilen_masa2);
                        break;
                    }
                    else
                        printf("Bu masa daha once rezerve edilmistir.Lutfen baska bir masa seciniz...");
                    break;
                }
                else
                {

                    printf("Sigara icilen bolumdeki butun masalar doludur, iyi gunler dileriz...");
                    break;
                }

            }

            printf("Lutfen rezerve etmek istediginiz masayi seciniz:");
            scanf("%d",&secilen_masa1);

            if (masa[secilen_masa1-1]==0)
            {
                masa[secilen_masa1-1]=1;
                printf("Rezarvasyonunuz %d. masaya yapilmistir.",secilen_masa1);
                break;
            }
            else
            {
                printf("Bu masa daha once rezerve edilmistir.Lutfen baska bir masa seciniz...");
                printf("\n");
                break;
            }

            break;

        case 3:
            for(i=5; i<10; i++)
            {
                if (masa[i]==0)
                    printf("%d. masa:BOS\n",i+1);
                else
                    printf("%d. masa:DOLU\n",i+1);
            }

            toplam2=masa[5]+masa[6]+masa[7]+masa[8]+masa[9];
            if (toplam2==5)
            {
                printf("Sectiginiz masalar doludur.Sigara icilmeyen bolumden rezerve etmek ister misiniz?");
                scanf(" %c",&secim2);
                if (secim2=='e')
                {
                    printf("Lutfen rezerve etmek istediginiz masayi seciniz:");
                    scanf("%d",&secilen_masa1);

                    if (masa[secilen_masa1-1]==0)
                    {
                        masa[secilen_masa1-1]=1;
                        printf("Rezarvasyonunuz %d. masaya yapilmistir.",secilen_masa1);
                    }
                    else
                        printf("Bu masa daha once rezerve edilmistir.Lutfen baska bir masa seciniz...");

                }
                else
                    printf("Sigara icilen bolumdeki butun masalar doludur, iyi gunler dileriz...");

            }
            printf("Lutfen rezerve etmek istediginiz masayi seciniz:");
            scanf("%d",&secilen_masa2);

            if (masa[secilen_masa2-1]==0)
            {
                masa[secilen_masa2-1]=1;
                printf("Rezarvasyonunuz %d. masaya yapilmistir.",secilen_masa2);
            }
            else
                printf("Bu masa daha once rezerve edilmistir.Lutfen baska bir masa seciniz...");

            break;

        case 4:
            exit(0);
            break;

        }
    }
    while (secim!=4);

    return 0;
}
