#include <stdio.h>

int main(void)
//Un comentario para la clase//
{
    int Pixeles_Ancho, Pixeles_Alto;
    float Porcentaje_X, Porcentaje_Y;
    float Porcentaje_Ancho, Porcentaje_Alto;
    int Coordenada_ESIzq_enX, Coordenada_ESIzq_enY;
    int Coordenada_EIDer_enX, Coordenada_EIDer_enY;

    scanf_s("%i", &Pixeles_Ancho);
    scanf_s("%i", &Pixeles_Alto);
    scanf_s("%f", &Porcentaje_X);
    scanf_s("%f", &Porcentaje_Y);
    scanf_s("%f", &Porcentaje_Ancho);
    scanf_s("%f", &Porcentaje_Alto);
    scanf_s("%i", &Coordenada_ESIzq_enX);
    scanf_s("%i", &Coordenada_ESIzq_enY);
    scanf_s("%i", &Coordenada_EIDer_enX);
    scanf_s("%i", &Coordenada_EIDer_enY);

    Coordenada_ESIzq_enX = Pixeles_Ancho * Porcentaje_X;
    Coordenada_ESIzq_enY = Pixeles_Alto * Porcentaje_Y;
    Coordenada_EIDer_enX = Coordenada_ESIzq_enX + Pixeles_Ancho * Porcentaje_Ancho;
    Coordenada_EIDer_enY = Coordenada_ESIzq_enY + Pixeles_Alto * Porcentaje_Alto;

    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", Pixeles_Ancho, Pixeles_Alto, Porcentaje_X, Porcentaje_Y, Porcentaje_Ancho, Porcentaje_Alto, Coordenada_ESIzq_enX, Coordenada_ESIzq_enY, Coordenada_EIDer_enX, Coordenada_EIDer_enY);

}   

