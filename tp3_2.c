#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANIO 5
#define MES 12
int main()
{

    float matriz[ANIO][MES], totalGanancia = 0, gananciaMax = 0, gananciaMin = 50001, gananciaMes;
    int mesMax, anioMax, mesMin, anioMin;

    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            matriz[i][j] = rand() % 50000 + 10001;
        }
    }
    for (int i = 0; i < ANIO; i++)
    {
        printf("\n\nAño:  %d", i + 1);
        for (int j = 0; j < MES; j++)
        {
            printf("\n\tGanancia mes N. %d: $%.2f", j + 1, matriz[i][j]);

            totalGanancia += matriz[i][j];

            gananciaMes = matriz[i][j];
            if (gananciaMax < gananciaMes)
            {
                gananciaMax = gananciaMes;
                mesMax = j + 1;
                anioMax = i + 1;
            }

            if (gananciaMin > gananciaMes)
            {
                gananciaMin = gananciaMes;
                mesMin = j + 1;
                anioMin = i + 1;
            }
        }

        printf("\nGanancia Total Año %d = $%.2f", i + 1, totalGanancia);

        printf("\nPromedio de Ganancia por Año $%.2f", totalGanancia / 12);
        totalGanancia = 0;

        printf("\n\nGanancia maxima = $%.2f - Año %d - Mes %d", gananciaMax, anioMax, mesMax);
        printf("\n\nGanancia minima = $%.2f - Año %d - Mes %d", gananciaMin, anioMin, mesMin);
    }

    scanf("%c");
    return 0;
}