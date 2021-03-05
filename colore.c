#include "minirt.h"

int create_color(float r, float g, float b)
{
    int ir = (int)(255.999 * r);
	int ig = (int)(255.999 * g);
	int ib = (int)(255.999 * b);
	int colore = create_trgb(0, ir, ig, ib);
    return(colore);
}