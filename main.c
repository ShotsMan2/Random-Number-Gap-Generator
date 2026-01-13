#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int i,sayi,n,uygunluk,j,fark,deneme;

    printf("n i giriniz");
    scanf("%d",&n);

    int dizi[99];

    srand(time(NULL));

    for(i=0;i<n;i++){
         deneme=0; 
        for(;;){
            uygunluk=1;

            sayi=rand()%61+10;

            for(j=0;j<i;j++){



                if(dizi[j]>sayi){
                    fark=dizi[j]-sayi;
                }
                else{
                    fark=sayi-dizi[j];
                }

                if(fark<=5){
                    uygunluk=0;
                    break;
                }

            }
            if(uygunluk==1){
                break;
            }

            deneme++;

            if(deneme>1000){
                printf("\n dolud");

                return 0;
            }
        }
        dizi[i]=sayi;
        printf("%d ",dizi[i]);
    }
}

