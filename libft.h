/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoizai <ahoizai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:04:47 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/13 12:47:44 by ahoizai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
# include <stdarg.h>
# include <math.h>

// # include <stdio.h>
// # include <bsd/string.h>

//ft_get
int				*ft_get_int(void *new_int);
char			*ft_get_char(char *new_char);
char			**ft_get_tab(char **new_tab);
void			*ft_get_void(void *new_void);
void			*ft_get_struct(void *new_struct);

//ft_free
void			free_var(void *var);
void			free_tab(char **tab);

//ft_is
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_isnumeric(const char *str);

//ft_lst
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);

//ft_mem
void			*ft_realloc(void *ptr, size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp( const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_safe_malloc(size_t size);

//ft_printf
int				ft_printf(const char *str, ...);
int				ft_print_char(char c);
int				ft_print_str(char *s);
int				ft_print_nbr(int n);
int				ft_print_hex(unsigned int number, int upper_case);
int				ft_print_ptr(unsigned long ptr, int first);
int				ft_print_unsigned(unsigned int n);
void			ft_print_tab(char **tab);
void			ft_print_tab_int(int **tab);

//ft_put
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

//ft_str
char			**ft_split(char const *s, char c);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strdup(const char *s);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			_strlen(const char *s);
char			t_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtok(char *str, const char *delim);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_str_toupper(char *str);
char			*ft_str_tolower(char *str);
char			**ft_strdup_tab(char **args);
int				ft_strstartwith(const char *str, const char *set);
int				ft_strendwith(const char *str, const char *set);
int				ft_strcountchar(char *str, char c);
char			**ft_dup_tab_index(char **tab_src, int index);
char			*ft_strjoin_tab(char **args, int count);
void			ft_swap(char *a, char *b);
char			*ft_trim_whitespace(const char *str);
char			*ft_trim_start_whitespace(const char *str);
char			*ft_trim_end_whitespace(const char *str);
char			**ft_subarray(char **argv, int start, int end);
int				ft_tablen(char **tab);

//ft_to
int				ft_atoi(const char *nptr);
long			ft_atol(const char *str);
char			*ft_itoa(int n);
int				ft_toupper(int c);
int				ft_tolower(int c);

//get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# define FD_MAX 1024

char			*get_next_line(int fd);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strjoin_gnl(char *s1, char *s2);
char			*ft_strchr(const char *s, int c);

size_t			ft_strlen(const char *s);
char			*ft_strdup_gnl(const char *s, size_t len);

//int_to_argb
typedef struct s_color
{
	unsigned int	hex;
	int				r;
	int				g;
	int				b;
	int				a;
}			t_color;

t_color			ft_int_to_rgb(unsigned int color);
void			ft_color_from_hex(t_color *color, unsigned int hex);
unsigned int	ft_color_to_hex(t_color *color);

//hex_to_uint
unsigned int	ft_hex_to_uint(const char *hex);

/* Structure for a 3D vector */
typedef struct s_vector3
{
	double			x;
	double			y;
	double			z;
}	t_vector3;

typedef struct s_vertex
{
	double	x;
	double	y;
	double	z;
	int		color;
}	t_vertex;

// ft_math.c
double			ft_sqrt(double number);
double			ft_pow(double base, int exp);
double			ft_clamp(double value, double min, double max);
double			ft_fabs(double x);
double			ft_lerp(double a, double b, double t);

//ft_vector3.c
t_vector3		ft_vec3_create(double x, double y, double z);
t_vector3		ft_vec3_normalize(t_vector3 v);
double			ft_vec3_length(t_vector3 v);

// ft_vector3_calc.c
t_vector3		ft_vec3_add(t_vector3 a, t_vector3 b);
t_vector3		ft_vec3_sub(t_vector3 a, t_vector3 b);
t_vector3		ft_vec3_cross(t_vector3 a, t_vector3 b);
t_vector3		ft_vec3_scale(t_vector3 v, double scale);
double			ft_vec3_dot(t_vector3 a, t_vector3 b);

/* Structure for a 2D vector */
typedef struct s_vector
{
	double	x;
	double	y;
}	t_vector;

//ft_vector.c
t_vector		ft_vec_create(double x, double y);
t_vector		ft_vec_normalize(t_vector v);
t_vector		ft_vec_perp(t_vector v);
double			ft_vec_length(t_vector v);

// ft_vector_calc.c
t_vector		ft_vec_add(t_vector a, t_vector b);
t_vector		ft_vec_sub(t_vector a, t_vector b);
double			ft_vec_cross(t_vector a, t_vector b);
t_vector		ft_vec_scale(t_vector v, double scale);
double			ft_vec_dot(t_vector a, t_vector b);

//ft_matrix4.c
/* Structure for a 4x4 matrix */
typedef struct s_matrix4
{
	double	m[4][4];
}	t_matrix4;

// w = 1 for a point, w = 0 for a vector
typedef struct s_tuple
{
	double	x;
	double	y;
	double	z;
	double	w;
}	t_tuple;

t_matrix4		ft_mat4_identity(void);
t_matrix4		ft_mat4_multiply(t_matrix4 a, t_matrix4 b);
t_vector3		ft_mat4_mul_vec3(t_matrix4 mat, t_vector3 v);
t_matrix4		ft_mat4_translation(double x, double y, double z);
t_matrix4		ft_mat4_scale(double x, double y, double z);

//ft_matrix4_rotate.c
t_matrix4		ft_mat4_rotation_x(double angle);
t_matrix4		ft_mat4_rotation_y(double angle);
t_matrix4		ft_mat4_rotation_z(double angle);

//ft_ray_object.c
/* Structure for a ray */
typedef struct s_ray
{
	t_vector3	origin;
	t_vector3	direction;
}	t_ray;

t_ray			ft_ray_create(t_vector3 origin, t_vector3 direction);
t_vector3		ft_ray_at(t_ray ray, double t);

/* Structure for a sphere */
typedef struct s_sphere
{
	t_vector3	center;
	double		radius;
}	t_sphere;

/* Structure for a plane */
typedef struct s_plane
{
	t_vector3	point;
	t_vector3	normal;
}	t_plane;

int				ft_ray_intersects_sphere(t_ray ray, t_sphere sphere, double *t);
int				ft_ray_intersects_plane(t_ray ray, t_plane plane, double *t);

// ft_light.c
/* Structure for a light source */
typedef struct s_light
{
	t_vector3	position;
	double		intensity;
}	t_light;

double			ft_compute_lighting(t_vector3 point,
					t_vector3 normal, t_light light);

// ft_mlx_pixel_put.c
typedef struct s_img_data 
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
}	t_img_data;

void			ft_mlx_pixel_put(t_img_data *data, int x, int y, int color);

//ft_color.c
int				ft_get_background_pixel(t_img_data *img, int x, int y);
unsigned int	ft_get_pixel_color(t_img_data *texture, int x, int y);
unsigned int	ft_blend_colors_sqrt(unsigned int col1,
					unsigned int col2, double ratio);
unsigned int	ft_blend_colors_linear(unsigned int col1,
					unsigned int col2, double ratio);

typedef struct s_draw
{
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	int		err;
	int		color;
}	t_draw;

double			ft_rand(void);

#endif
