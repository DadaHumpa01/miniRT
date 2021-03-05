#include "minirt.h"

t_vector create_vec(float x, float y, float z)
{
    t_vector v;
    v.x = x;
    v.y = y;
    v.z = z;
	return(v);
}

t_vector vec_add(t_vector v1, t_vector v2)
{
    t_vector v;

    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    v.z = v1.z + v2.z;
	return(v);
}

t_vector vec_sub(t_vector v1, t_vector v2)
{
    t_vector v;

    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;
    v.z = v1.z - v2.z;
	return(v);
}

t_vector vec_sub_float(t_vector v1, float t)
{
    t_vector v;

    v.x = v1.x - t;
    v.y = v1.y - t;
    v.z = v1.z - t;
	return(v);
}

t_vector vec_mul_vec(t_vector v1, t_vector v2)
{
    t_vector v;

    v.x = v1.x * v2.x;
    v.y = v1.y * v2.y;
    v.z = v1.z * v2.z;
	return(v);
}

t_vector vec_mul_float(t_vector v1, float t)
{
    t_vector v;

    v.x = v1.x * t;
    v.y = v1.y * t;
    v.z = v1.z * t;
	return(v);
}

t_vector vec_div(t_vector v1, t_vector v2)
{
    t_vector v;

    v.x = v1.x / v2.x;
    v.y = v1.y / v2.y;
    v.z = v1.z / v2.z;
	return(v);
}

float vec_length_squared(t_vector v)
{
    return(v.x * v.x + v.y * v.y + v.z * v.z);
}

// La length prende la squared e semplicemente fa la radice
float vec_length(t_vector v)
{
    return(sqrt(vec_length_squared(v)));
}

float vec_dot(t_vector v1, t_vector v2)
{
	return(v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

// Questa è la funzione che assegna la norma al vettore
t_vector vec_normalize(t_vector v)
{
    t_vector normalized_vect;
    float len = vec_length(v);

    normalized_vect.x = v.x / len;
    normalized_vect.y = v.y / len;
    normalized_vect.z = v.z / len;
	return(normalized_vect);
}

