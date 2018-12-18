#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=1;
    int liczba;
    int minimum = funkcja (x);

    while (x<=360)
    {
        x+=1;
        int zmienna = funkcja(x);
        if (zmienna<minimum)
        {
            minimum = zmienna;
            liczba = x;
        }
        printf("\n%d dla x = %d", zmienna, x);
    }
    printf ("\n-------------------------");
    printf ("\nMin rowne %d  dla x rownego %d", minimum, liczba);


    return 0;
}

int funkcja (int x)
{
    int zmienna = (4*cos(x)+sin(2*x)+((x-2)*(x-3)));
    zmienna = (zmienna*zmienna)-(4*zmienna);
    return zmienna;
}


