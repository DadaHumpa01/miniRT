#include "minirt.h"

//Questo è uno struct che contiene tutte le informazioni sulla nostra immagine
typedef struct	s_data {
    void	*img;
    char	*addr;
    int		bits_per_pixel;
    int		line_length;
    int		endian;
}				t_data;

// La versione migliorata della funzione che putta i pixel a schermo
void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

//Questa esegue uno shift per creare i colori
int		create_trgb(int t, int r, int g, int b)
{
	return(t << 24 | r << 16 | g << 8 | b);
}

int main(void)
{
    void *mlx;
	void *mlx_win;

	int image_height = 500;
	int image_width = 500;

    t_data img;

	int j = image_height - 1;
	int i = 0;

	t_ray ray;
	//Questa è la parte necessaria a creare il viewport (dentro il quale passeranno i raggi)
	//Il viewport non è un quadrato ma è 4x2;
	t_vector lower_left_corner = create_vec(-2.0, -1.0, -1.0); // Punto di partenza
	t_vector hor_axis = create_vec(4.0, 0.0, 0.0); // Due assi del viewport
	t_vector ver_axis = create_vec(0.0, 2.0, 0.0);
	t_vector origin = create_vec(0.0, 0.0, 0.0); // Origine camera, in sostanza da dove spari i raggi
    mlx = mlx_init();

	t_vector color_vec;
	int color;

	mlx_win = mlx_new_window(mlx, image_height, image_width, "MiniRT");
    img.img = mlx_new_image(mlx, image_height, image_width);
	// Se passo by reference li setta lui in modo automatico
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	
    // Questa parte crea il gradient
	while(j >= 0)
	{
		i = 0;
		while(i < image_width)
		{
			float u = (float)(i) / image_width;
			float v = (float)(j) / image_height;
			ray = create_ray(origin, vec_add(vec_add(vec_mul_float(hor_axis, u), vec_mul_float(ver_axis, v)), lower_left_corner));
			color_vec = ray_color(ray);
			color = create_color(color_vec.x, color_vec.y, color_vec.z);
			my_mlx_pixel_put(&img, j, i, color);
			i++;
		}
		j--; 
	}

	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
} 