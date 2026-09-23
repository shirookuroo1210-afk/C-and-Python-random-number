#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int angka_rahasia = rand() % 100 +1;
    int tebakan;

    while(1)
    {
        printf("tebak angka antara 1-100: ");
        scanf("%d", &tebakan);

        if(tebakan == angka_rahasia)
        {
            printf("tebakan benar,angkanya adalah %d\n", angka_rahasia);
            break;
        }
        else if(tebakan < angka_rahasia)
        {
            printf("angka terlalu kecil\n");
        }
        else
        {
            printf("angka terlalu besar\n");
        }
    }
    return 0;
}
//code written by lyvo
