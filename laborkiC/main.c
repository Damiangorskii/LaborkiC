#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float kat1, kat2, kat3;
    float kat1sin, kat1cos, kat2sin, kat2cos, kat3sin, kat3cos;
    printf ("\nPodaj 1 katy w stopniach ");
    scanf ("%f", &kat1);
    printf ("\nPodaj 2 katy w stopniach ");
    scanf ("%f", &kat2);
    printf ("\nPodaj 3 katy w stopniach ");
    scanf ("%f", &kat3);

    kat1sin = sin(kat1);
    kat1cos = cos(kat1);
    kat2sin = sin(kat2);
    kat2cos = cos(kat2);
    kat3sin = sin(kat3);
    kat3cos = cos(kat3);

    float tab[3][3];
    tab[0][0]=(kat1cos*kat3cos)-(kat1sin*kat3sin*kat2cos);
    tab[0][1]=(kat1sin*kat3cos)+(kat1cos*kat3sin*kat2cos);
    tab[0][2]=(kat3sin*kat2sin);
    tab[1][0]=(-kat1cos*kat3sin)-(kat1sin*kat2cos*kat3cos);
    tab[1][1]=(-kat1sin*kat3sin)+(kat1cos*kat2cos*kat3cos);
    tab[1][2]=(kat3cos*kat2sin);
    tab[2][0]=(kat1sin*kat2sin);
    tab[2][1]=(-kat1cos*kat2sin);
    tab[2][2]=(kat2cos);
    int i=0;
    int j=0;
    printf("\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%12f", tab[i][j]);
        }
        printf("\n");
    }
    float wyznacznik;

    wyznacznik=(tab[0][0]*tab[1][1]*tab[2][2])+(tab[0][1]*tab[1][2]*tab[2][0])+(tab[0][2]*tab[1][0]*tab[2][1])-(tab[2][0]*tab[1][1]*tab[0][2])-(tab[2][1]*tab[1][2]*tab[0][0])-(tab[2][2]*tab[1][0]*tab[0][1]);
    printf("\nWyznacznik = %f ", wyznacznik);


    return 0;
}
