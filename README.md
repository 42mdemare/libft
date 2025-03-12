# Libft - Bibliothèque C personnalisée

La **libft** est une bibliothèque de fonctions en C développée pour l'école 42. Elle propose un ensemble de fonctions utiles pour la gestion des chaînes de caractères, de la mémoire, des listes chaînées et d'autres opérations courantes en programmation C.

## 📂 Structure du projet

- **`libft.h`** : Fichier d'en-tête principal avec les déclarations de fonctions.
- **`Makefile`** : Script pour compiler la bibliothèque.
- **`src/`** : Contient toutes les implémentations des fonctions, organisées par catégorie.

## 🔧 Compilation

Pour compiler la bibliothèque et générer `libft.a`, utilisez la commande :
```sh
make
```

Pour nettoyer les fichiers objets :
```sh
make clean
```

Pour supprimer tous les fichiers objets et la bibliothèque :
```sh
make fclean
```

Pour recompiler entièrement :
```sh
make re
```

## 📌 Utilisation

Inclure `libft.h` dans vos fichiers et compiler avec `libft.a` :
```c
#include "libft.h"
```

Compilation avec un fichier utilisateur :
```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## 📜 Liste complète des fonctions avec descriptions très détaillées

### Ft free
- `free_tab` : Libère la mémoire allouée pour un tableau de chaînes de caractères et met chaque élément à `NULL` (free_tab).
- `free_var` : Libère une variable allouée dynamiquement et met son pointeur à `NULL` pour éviter toute fuite de mémoire (free_var).

---

### Ft get
- `ft_get_int` : Stocke et récupère un pointeur vers un entier statique.
  - **Prototype** : `int *ft_get_int(int *new_int);`
  - **Description** : Cette fonction utilise une variable statique pour stocker un pointeur vers un entier. Si un nouveau pointeur est fourni en paramètre, il met à jour la variable statique avec ce nouveau pointeur. Retourne toujours le pointeur stocké.

- `ft_get_char` : Stocke et récupère un pointeur vers un caractère statique.
  - **Prototype** : `char *ft_get_char(char *new_char);`
  - **Description** : Fonction similaire à `ft_get_int`, mais pour un caractère. Permet de stocker et récupérer un pointeur vers une variable `char` de manière persistante.

- `ft_get_tab` : Stocke et récupère un pointeur vers un tableau de chaînes statique.
  - **Prototype** : `char **ft_get_tab(char **new_tab);`
  - **Description** : Cette fonction utilise une variable statique pour stocker un pointeur vers un tableau de chaînes de caractères. Pratique pour conserver un tableau en mémoire sans passage direct de paramètres.

- `ft_get_void` : Stocke et récupère un pointeur générique statique.
  - **Prototype** : `void *ft_get_void(void *new_void);`
  - **Description** : Permet de stocker et récupérer un pointeur générique `void *`. Peut être utilisé pour conserver tout type de données.

- `ft_get_struct` : Stocke et récupère un pointeur vers une structure statique.
  - **Prototype** : `void *ft_get_struct(void *new_struct);`
  - **Description** : Fonction identique à `ft_get_void`, mais utilisée spécifiquement pour stocker un pointeur vers une structure.

---

### Ft is
- `ft_isalnum` : Vérifie si un caractère est alphanumérique, c'est-à-dire une lettre (`a-z`, `A-Z`) ou un chiffre (`0-9`).
- **Retourne** : `1` si le caractère est alphanumérique, `0` sinon.

- `ft_isalpha` : Vérifie si un caractère est une lettre (`a-z`, `A-Z`).
- **Retourne** : `1` si le caractère est alphabétique, `0` sinon.

- `ft_isascii` : Vérifie si un caractère appartient à la table ASCII standard (valeurs de `0` à `127`).
- **Retourne** : `1` si le caractère est un ASCII valide, `0` sinon.

- `ft_isdigit` : Vérifie si un caractère est un chiffre (`0-9`).
- **Retourne** : `1` si le caractère est un chiffre, `0` sinon.

- `ft_isnumeric` : Vérifie si une chaîne de caractères représente un nombre entier positif (`0-9` uniquement).
- **Retourne** : `1` si la chaîne est entièrement composée de chiffres, `0` sinon.

- `ft_isprint` : Vérifie si un caractère est imprimable, c'est-à-dire qu'il appartient à la plage des caractères visibles ASCII (`32` à `126`).
- **Retourne** : `1` si le caractère est imprimable, `0` sinon.

- `ft_isspace` : Vérifie si un caractère est un espace ou un caractère de séparation.
- **Retourne** : `1` si le caractère est un espace, `0` sinon.

---

### Ft lst
- `ft_lstadd_back` : Ajoute un élément à la fin d'une liste chaînée (ft_lstadd_back).
- `ft_lstadd_front` : Ajoute un élément au début d'une liste chaînée (ft_lstadd_front).
- `ft_lstclear` : Supprime et libère tous les éléments d'une liste chaînée (ft_lstclear).
- `ft_lstdelone` : Supprime et libère un élément spécifique d'une liste chaînée (ft_lstdelone).
- `ft_lstiter` : Applique une fonction à chaque élément d'une liste chaînée (ft_lstiter).
- `ft_lstlast` : Retourne le dernier élément d'une liste chaînée (ft_lstlast).
- `ft_lstmap` : Crée une nouvelle liste en appliquant une fonction à chaque élément d'une liste existante (ft_lstmap).
- `ft_lstnew` : Crée un nouvel élément de liste chaînée (ft_lstnew).
- `ft_lstsize` : Retourne la taille d'une liste chaînée (ft_lstsize).

---

### Ft mem
- `ft_bzero` : Remplit une zone mémoire avec des zéros (ft_bzero).
- `ft_calloc` : Alloue de la mémoire et l'initialise à zéro (ft_calloc).
- `ft_memchr` : Recherche un octet spécifique dans une zone mémoire (ft_memchr).
- `ft_memcmp` : Compare deux zones mémoire octet par octet (ft_memcmp).
- `ft_memcpy` : Copie une zone mémoire dans une autre (ft_memcpy).
- `ft_memmove` : Copie une zone mémoire en tenant compte des chevauchements (ft_memmove).
- `ft_memset` : Remplit une zone mémoire avec une valeur spécifique (ft_memset).
- `ft_realloc` : Réalloue un bloc de mémoire en modifiant sa taille (ft_realloc).
- `ft_safe_malloc` : Alloue de la mémoire en s'assurant qu'elle est bien allouée (ft_safe_malloc).

---

## Structures

### Structure pour un vecteur 3D (`t_vector3`)
```c
typedef struct s_vector3
{
	double	x;
	double	y;
	double	z;
}	t_vector3;
```
- Représente un vecteur ou un point 3D.

### Structure pour un sommet (`t_vertex`)
```c
typedef struct s_vertex
{
	double	x;
	double	y;
	double	z;
	int		color;
}	t_vertex;
```
- Représente un point dans l'espace avec une couleur associée.

### Structure pour un vecteur 2D (`t_vector2`)
```c
typedef struct s_vector2
{
	double	x;
	double	y;
}	t_vector2;
```
- Représente un vecteur ou un point 2D.

### Structure pour une matrice 4x4 (`t_matrix4`)
```c
typedef struct s_matrix4
{
	double	m[4][4];
}	t_matrix4;
```
- Représente une matrice 4x4 utilisée pour les transformations 3D.

### Structure pour un rayon (`t_ray`)
```c
typedef struct s_ray
{
	t_vector3	origin;
	t_vector3	direction;
}	t_ray;
```
- Définit un rayon utilisé en rendu 3D et pour les calculs d'intersection.

### Structure pour une sphère (`t_sphere`)
```c
typedef struct s_sphere
{
	t_vector3	center;
	double		radius;
}	t_sphere;
```
- Représente une sphère dans l'espace 3D.

### Structure pour un plan (`t_plane`)
```c
typedef struct s_plane
{
	t_vector3	point;
	t_vector3	normal;
}	t_plane;
```
- Définit un plan par un point et une normale.

### Structure pour une source de lumière (`t_light`)
```c
typedef struct s_light
{
	t_vector3	position;
	double		intensity;
}	t_light;
```
- Représente une source de lumière dans une scène 3D.

---
### Aléatoire (`ft_rand.c`)
- `double	ft_rand(void)` : Génère un nombre pseudo aléatoire.

### Couleurs (`ft_color.c`)
- `ft_get_background_pixel(t_img_data *img, int x, int y)` : Récupère la couleur d'un pixel en arrière-plan à partir d'une image.
- `ft_get_pixel_color(t_img_data *texture, int x, int y)` : Récupère la couleur d'un pixel dans une texture.
- `ft_blend_colors_sqrt(unsigned int col1, unsigned int col2, double ratio)` : Mélange deux couleurs en utilisant une interpolation quadratique (sqrt) pour un rendu plus réaliste mais plus lent.
- `ft_blend_colors_linear(unsigned int col1, unsigned int col2, double ratio)` : Mélange deux couleurs en utilisant une interpolation linéaire, beaucoup plus rapide mais moins réaliste.

### Mathématiques (`ft_math.c`)
- `ft_sqrt(double number)` : Calcule la racine carrée d'un nombre.
- `ft_pow(double base, int exp)` : Calcule la puissance d'une base élevée à un exposant.
- `ft_clamp(double value, double min, double max)` : Contraint une valeur entre un minimum et un maximum.
- `ft_fabs(double x)` : Retourne la valeur absolue d'un nombre flottant.
- `ft_lerp(double a, double b, double t)` : Effectue une interpolation linéaire entre deux valeurs.

### Opérations sur les vecteurs 3D (`ft_vector3.c`)
- `ft_vec3_create(double x, double y, double z)` : Crée un vecteur 3D.
- `ft_vec3_normalize(t_vector3 v)` : Normalise un vecteur 3D.
- `ft_vec3_length(t_vector3 v)` : Retourne la longueur d'un vecteur 3D.

### Calculs sur les vecteurs 3D (`ft_vector3_calc.c`)
- `ft_vec3_add(t_vector3 a, t_vector3 b)` : Additionne deux vecteurs 3D.
- `ft_vec3_sub(t_vector3 a, t_vector3 b)` : Soustrait deux vecteurs 3D.
- `ft_vec3_cross(t_vector3 a, t_vector3 b)` : Calcule le produit vectoriel de deux vecteurs 3D.
- `ft_vec3_scale(t_vector3 v, double scale)` : Multiplie un vecteur par un scalaire.
- `ft_vec3_dot(t_vector3 a, t_vector3 b)` : Calcule le produit scalaire de deux vecteurs 3D.

### Opérations sur les vecteurs 2D (`ft_vector2.c`)
- `ft_vec2_create(double x, double y)` : Crée un vecteur 2D.
- `ft_vec2_normalize(t_vector2 v)` : Normalise un vecteur 2D.
- `ft_vec2_perp(t_vector2 v)` : Retourne un vecteur perpendiculaire.
- `ft_vec2_length(t_vector2 v)` : Retourne la longueur d'un vecteur 2D.

### Calculs sur les vecteurs 2D (`ft_vector2_calc.c`)
- `ft_vec2_add(t_vector2 a, t_vector2 b)` : Additionne deux vecteurs 2D.
- `ft_vec2_sub(t_vector2 a, t_vector2 b)` : Soustrait deux vecteurs 2D.
- `ft_vec2_cross(t_vector2 a, t_vector2 b)` : Calcule le produit vectoriel de deux vecteurs 2D.
- `ft_vec2_scale(t_vector2 v, double scale)` : Multiplie un vecteur 2D par un scalaire.
- `ft_vec2_dot(t_vector2 a, t_vector2 b)` : Calcule le produit scalaire de deux vecteurs 2D.

### Transformations matricielles (`ft_matrix4.c`)
- `ft_mat4_identity(void)` : Retourne une matrice identité.
- `ft_mat4_multiply(t_matrix4 a, t_matrix4 b)` : Multiplie deux matrices 4x4.
- `ft_mat4_mul_vec3(t_matrix4 mat, t_vector3 v)` : Multiplie une matrice 4x4 par un vecteur 3D.
- `ft_mat4_translation(double x, double y, double z)` : Crée une matrice de translation.
- `ft_mat4_scale(double x, double y, double z)` : Crée une matrice de mise à l'échelle.

### Rotations matricielles (`ft_matrix4_rotate.c`)
- `ft_mat4_rotation_x(double angle)` : Retourne une matrice de rotation sur l'axe X.
- `ft_mat4_rotation_y(double angle)` : Retourne une matrice de rotation sur l'axe Y.
- `ft_mat4_rotation_z(double angle)` : Retourne une matrice de rotation sur l'axe Z.

### Gestion des rayons (`ft_ray_object.c`)
- `ft_ray_create(t_vector3 origin, t_vector3 direction)` : Crée un rayon à partir d'une origine et d'une direction.
- `ft_ray_at(t_ray ray, double t)` : Calcule un point sur un rayon en fonction du paramètre `t`.
- `ft_ray_intersects_sphere(t_ray ray, t_sphere sphere, double *t)` : Vérifie si un rayon intersecte une sphère.
- `ft_ray_intersects_plane(t_ray ray, t_plane plane, double *t)` : Vérifie si un rayon intersecte un plan.

### Gestion de l'éclairage (`ft_light.c`)
- `ft_compute_lighting(t_vector3 point, t_vector3 normal, t_light light)` : Calcule l'éclairage d'un point en fonction d'une source lumineuse et de la normale.

### Affichage de pixels (`ft_mlx_pixel_put.c`)
- `ft_mlx_pixel_put(t_img_data *data, int x, int y, int color)` : Place un pixel à une position donnée dans une image MiniLibX.

---

### Ft printf
- `ft_count_hex_digits` : Compte le nombre de chiffres dans une valeur hexadécimale (ft_count_hex_digits).
- `ft_formats` : Gère les formats de conversion pour `printf` (ft_formats).
- `ft_num_len` : Retourne la longueur d'un nombre sous forme de chaîne (ft_num_len).
- `ft_print_char` : Affiche un caractère (ft_print_char).
- `ft_print_str` : Affiche une chaîne de caractères (ft_print_str).
- `ft_print_tab` : Affiche un tableau de chaînes de caractères (ft_print_tab).

---

### Ft put
- `ft_putchar_fd` : Affiche un caractère sur un file descriptor (ft_putchar_fd).
- `ft_putendl_fd` : Affiche une chaîne suivie d'un retour à la ligne sur un file descriptor (ft_putendl_fd).
- `ft_putnbr_fd` : Affiche un nombre entier sur un file descriptor (ft_putnbr_fd).
- `ft_putstr_fd` : Affiche une chaîne sur un file descriptor (ft_putstr_fd).

---

### Ft str
- `free_tab_subarray` : Extrait une sous-chaîne d'un tableau en précisant un point de départ et une longueur.
- `ft_dup_tab_index` : Duplique un tableau de chaînes de caractères en fonction d'un index donné.
- `ft_in_set` : Vérifie si un caractère appartient à un ensemble donné de caractères.
- `ft_str_tolower` : Convertit une chaîne de caractères en minuscules.
- `ft_str_toupper` : Convertit une chaîne de caractères en majuscules.
- `ft_strcat` : Concatène deux chaînes de caractères.
- `ft_strchr` : Recherche la première occurrence d'un caractère dans une chaîne.
- `ft_strcmp` : Compare deux chaînes de caractères et retourne la différence entre leurs valeurs ASCII.
- `ft_strcountchar` : Compte le nombre d'occurrences d'un caractère spécifique dans une chaîne.
- `ft_strcpy` : Copie une chaîne de caractères dans une autre.
- `ft_strdup` : Duplique une chaîne de caractères en allouant une nouvelle mémoire.
- `ft_strdup_tab` : Duplique un tableau de chaînes de caractères.
- `ft_strendwith` : Vérifie si une chaîne se termine par un suffixe donné.
- `ft_striteri` : Applique une fonction à chaque caractère d'une chaîne avec son index.
- `ft_strjoin` : Concatène deux chaînes en allouant une nouvelle mémoire pour le résultat.
- `ft_strjoin_tab` : Concatène un tableau de chaînes avec un séparateur.
- `ft_strlcat` : Concatène deux chaînes avec une taille de destination limitée.
- `ft_strlcpy` : Copie une chaîne en respectant une taille maximale.
- `ft_strlen` : Retourne la longueur d'une chaîne de caractères.
- `ft_strmapi` : Applique une fonction à chaque caractère d'une chaîne pour générer une nouvelle chaîne.
- `ft_strncmp` : Compare les premiers `n` caractères de deux chaînes.
- `ft_strnstr` : Recherche une sous-chaîne dans une autre en respectant une limite de caractères.
- `ft_strrchr` : Recherche la dernière occurrence d'un caractère dans une chaîne.
- `ft_strstartwith` : Vérifie si une chaîne commence par un préfixe donné.
- `ft_strstr` : Recherche une sous-chaîne dans une autre.
- `ft_strtok` : Divise une chaîne en plusieurs sous-chaînes en fonction d'un séparateur.
- `ft_substr` : Extrait une sous-chaîne d'une chaîne plus grande en spécifiant un point de départ et une longueur.
- `ft_swap` : Échange les valeurs de deux variables.
- `ft_tablen` : Retourne la longueur d'un tableau de chaînes de caractères.
- `ft_trim_end_whitespace` : Supprime les espaces en fin de chaîne.
- `ft_trim_start_whitespace` : Supprime les espaces en début de chaîne.
- `ft_trim_whitespace` : Supprime les espaces en début et en fin de chaîne.
- `ft_word_count` : Compte le nombre de mots dans une chaîne séparés par un délimiteur.

---

### Ft to
- `ft_atoi` : Convertit une chaîne de caractères en entier en tenant compte des espaces et du signe.
- `ft_atol` : Convertit une chaîne de caractères en long entier.
- `ft_hex_to_uint` : Convertit une chaîne hexadécimale en un entier non signé.
- `ft_int_to_rgb` : Convertit un entier en format couleur RGB.
- `ft_numlen` : Retourne la longueur d'un nombre sous forme de chaîne.
- `ft_tolower` : Convertit un caractère en minuscule.
- `ft_toupper` : Convertit un caractère en majuscule.

---

### Get next line
- `extract_line` : Extrait la ligne suivante d'un buffer de lecture.

## 🏆 Auteur

Projet développé dans le cadre de l'école 42.

