#include <stdio.h>

int alto, ancho, coor_x1, coor_y1, coor_x2, coor_y2;
float porc_coorx, porc_coory, porc_ancho, porc_alto;

int main(void)
{
	scanf_s("%i %i %f %f %f %f", &ancho, &alto, &porc_coorx, &porc_coory, &porc_ancho, &porc_alto);
	coor_x1 = ancho * porc_coorx;
	coor_x2 = coor_x1 + (ancho * porc_ancho);

	coor_y1 = alto * porc_coory;
	coor_y2 = coor_y1 + (alto * porc_alto);

	printf("%i %i  %5.2f  %5.2f  %5.2f  %5.2f %i %i %i %i", ancho, alto, porc_coorx, porc_coory, porc_ancho, porc_alto, coor_x1, coor_y1, coor_x2, coor_y2);

	return 0;
}