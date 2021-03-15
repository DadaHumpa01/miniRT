#include "tupla.h"

void	stampa_matrix2a(t_matrici *matrix)
{
	printf("%f\t %f\n\n", matrix->mat2a[0][0], matrix->mat2a[0][1]);
	printf("%f\t %f\n\n", matrix->mat2a[1][0], matrix->mat2a[1][1]);
}

void	stampa_matrix2(t_matrici *matrix)
{
	printf("%f\t %f\n\n", matrix->mat2[0][0], matrix->mat2[0][1]);
	printf("%f\t %f\n\n", matrix->mat2[1][0], matrix->mat2[1][1]);
}

void	stampa_matrix3a(t_matrici *matrix)
{
	printf("%f\t %f\t %f\n\n", matrix->mat3a[0][0], matrix->mat3a[0][1], matrix->mat3a[0][2]);
	printf("%f\t %f\t %f\n\n", matrix->mat3a[1][0], matrix->mat3a[1][1], matrix->mat3a[1][2]);
	printf("%f\t %f\t %f\n\n", matrix->mat3a[2][0], matrix->mat3a[2][1], matrix->mat3a[2][2]);
}

void	stampa_matrix3(t_matrici *matrix)
{
	printf("%f\t %f\t %f\n\n", matrix->mat3[0][0], matrix->mat3[0][1], matrix->mat3[0][2]);
	printf("%f\t %f\t %f\n\n", matrix->mat3[1][0], matrix->mat3[1][1], matrix->mat3[1][2]);
	printf("%f\t %f\t %f\n\n", matrix->mat3[2][0], matrix->mat3[2][1], matrix->mat3[2][2]);
}

void	stampa_matrix4p(t_matrici *matrix)
{
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4p[0][0], matrix->mat4p[0][1], matrix->mat4p[0][2], matrix->mat4p[0][3]);
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4p[1][0], matrix->mat4p[1][1], matrix->mat4p[1][2], matrix->mat4p[1][3]);
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4p[2][0], matrix->mat4p[2][1], matrix->mat4p[2][2], matrix->mat4p[2][3]);
	printf("%f\t %f\t %f\t %f\n\n\n", matrix->mat4p[3][0], matrix->mat4p[3][1], matrix->mat4p[3][2], matrix->mat4p[3][3]);
}

void	stampa_matrix4a(t_matrici *matrix)
{
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4a[0][0], matrix->mat4a[0][1], matrix->mat4a[0][2], matrix->mat4a[0][3]);
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4a[1][0], matrix->mat4a[1][1], matrix->mat4a[1][2], matrix->mat4a[1][3]);
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4a[2][0], matrix->mat4a[2][1], matrix->mat4a[2][2], matrix->mat4a[2][3]);
	printf("%f\t %f\t %f\t %f\n\n\n", matrix->mat4a[3][0], matrix->mat4a[3][1], matrix->mat4a[3][2], matrix->mat4a[3][3]);
}

void	stampa_matrix4(t_matrici *matrix)
{
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4[0][0], matrix->mat4[0][1], matrix->mat4[0][2], matrix->mat4[0][3]);
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4[1][0], matrix->mat4[1][1], matrix->mat4[1][2], matrix->mat4[1][3]);
	printf("%f\t %f\t %f\t %f\n\n", matrix->mat4[2][0], matrix->mat4[2][1], matrix->mat4[2][2], matrix->mat4[2][3]);
	printf("%f\t %f\t %f\t %f\n\n\n", matrix->mat4[3][0], matrix->mat4[3][1], matrix->mat4[3][2], matrix->mat4[3][3]);
}