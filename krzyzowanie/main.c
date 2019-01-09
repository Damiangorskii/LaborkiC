#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab0 [10] ;
    int tab1 [10] ;

    srand(time(NULL));
    int i;

    printf("\nPodaj 10 elemntow zero-edynkowych pierwszej tablicy: ");
    for (i=0;i<10;i++)
    {
        scanf("%d", &tab0[i]);
    }

    printf("\nPodaj 10 elemntow zero-edynkowych drugiej tablicy: ");
    for (i=0;i<10;i++)
    {
        scanf("%d", &tab1[i]);
    }

    int tab2[10];
    printf("\nLOSOWE: ");
    for (i =0 ;i<10;i++)
    {
        tab2[i]=rand()%2;
        printf("\n%d", tab2[i]);
    }
    printf("\n\n");
    int tab3[10];

    for (i=0;i<10;i++)
    {
        if (tab2[i] == 0)
        {
            tab3[i] = tab0[i];
        }
        else
        {
            tab3[i] = tab1[i];
        }
        printf("%d", tab3[i]);
    }


    return 0;
}
