# Libft

Ce projet consiste à coder une bibliothèque de fonctions en C que vous pourrez réutiliser dans vos futurs projets. Chaque fonction doit être conforme aux standards de la libc.

## Contenu

### Partie 1 - Fonctions de la libc

Ces fonctions sont des réimplémentations de fonctions de la bibliothèque standard C.

1. **ft_isalpha**  
   **Prototype :** `int ft_isalpha(int c);`  
   **Description :** Vérifie si le caractère est une lettre de l'alphabet (a-z ou A-Z).

2. **ft_isdigit**  
   **Prototype :** `int ft_isdigit(int c);`  
   **Description :** Vérifie si le caractère est un chiffre (0-9).

3. **ft_isalnum**  
   **Prototype :** `int ft_isalnum(int c);`  
   **Description :** Vérifie si le caractère est alphanumérique (lettre ou chiffre).

4. **ft_isascii**  
   **Prototype :** `int ft_isascii(int c);`  
   **Description :** Vérifie si le caractère est un caractère ASCII.

5. **ft_isprint**  
   **Prototype :** `int ft_isprint(int c);`  
   **Description :** Vérifie si le caractère est imprimable.

6. **ft_strlen**  
   **Prototype :** `size_t ft_strlen(const char *s);`  
   **Description :** Calcule la longueur d'une chaîne de caractères.

7. **ft_memset**  
   **Prototype :** `void *ft_memset(void *b, int c, size_t len);`  
   **Description :** Remplit une zone mémoire avec un octet spécifique.

8. **ft_bzero**  
   **Prototype :** `void ft_bzero(void *s, size_t n);`  
   **Description :** Met une zone mémoire à zéro.

9. **ft_memcpy**  
   **Prototype :** `void *ft_memcpy(void *dst, const void *src, size_t n);`  
   **Description :** Copie une zone mémoire d'une source vers une destination.

10. **ft_memmove**  
    **Prototype :** `void *ft_memmove(void *dst, const void *src, size_t len);`  
    **Description :** Déplace une zone mémoire en tenant compte des chevauchements.

11. **ft_strlcpy**  
    **Prototype :** `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`  
    **Description :** Copie une chaîne de caractères avec une taille limite.

12. **ft_strlcat**  
    **Prototype :** `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`  
    **Description :** Concatène deux chaînes avec une taille limite.

13. **ft_toupper**  
    **Prototype :** `int ft_toupper(int c);`  
    **Description :** Convertit un caractère en majuscule.

14. **ft_tolower**  
    **Prototype :** `int ft_tolower(int c);`  
    **Description :** Convertit un caractère en minuscule.

15. **ft_strchr**  
    **Prototype :** `char *ft_strchr(const char *s, int c);`  
    **Description :** Trouve la première occurrence d'un caractère dans une chaîne.

16. **ft_strrchr**  
    **Prototype :** `char *ft_strrchr(const char *s, int c);`  
    **Description :** Trouve la dernière occurrence d'un caractère dans une chaîne.

17. **ft_strncmp**  
    **Prototype :** `int ft_strncmp(const char *s1, const char *s2, size_t n);`  
    **Description :** Compare deux chaînes de caractères jusqu'à un certain nombre de caractères.

18. **ft_memchr**  
    **Prototype :** `void *ft_memchr(const void *s, int c, size_t n);`  
    **Description :** Recherche un octet spécifique dans une zone mémoire.

19. **ft_memcmp**  
    **Prototype :** `int ft_memcmp(const void *s1, const void *s2, size_t n);`  
    **Description :** Compare deux zones mémoire.

20. **ft_strnstr**  
    **Prototype :** `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`  
    **Description :** Trouve la première occurrence d'une sous-chaîne dans une chaîne.

21. **ft_atoi**  
    **Prototype :** `int ft_atoi(const char *str);`  
    **Description :** Convertit une chaîne en entier.

22. **ft_calloc**  
    **Prototype :** `void *ft_calloc(size_t count, size_t size);`  
    **Description :** Alloue une mémoire pour un tableau et initialise à zéro.

23. **ft_strdup**  
    **Prototype :** `char *ft_strdup(const char *s1);`  
    **Description :** Duplique une chaîne de caractères.

### Partie 2 - Fonctions supplémentaires

1. **ft_substr**  
   **Prototype :** `char *ft_substr(char const *s, unsigned int start, size_t len);`  
   **Description :** Extrait une sous-chaîne d'une chaîne donnée.

2. **ft_strjoin**  
   **Prototype :** `char *ft_strjoin(char const *s1, char const *s2);`  
   **Description :** Concatène deux chaînes de caractères.

3. **ft_strtrim**  
   **Prototype :** `char *ft_strtrim(char const *s1, char const *set);`  
   **Description :** Supprime les caractères spécifiés au début et à la fin d'une chaîne.

4. **ft_split**  
   **Prototype :** `char **ft_split(char const *s, char c);`  
   **Description :** Sépare une chaîne de caractères selon un délimiteur donné.

5. **ft_itoa**  
   **Prototype :** `char *ft_itoa(int n);`  
   **Description :** Convertit un entier en chaîne de caractères.

6. **ft_strmapi**  
   **Prototype :** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`  
   **Description :** Applique une fonction à chaque caractère d'une chaîne avec son index.

7. **ft_striteri**  
   **Prototype :** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`  
   **Description :** Applique une fonction à chaque caractère d'une chaîne.

8. **ft_putchar_fd**  
   **Prototype :** `void ft_putchar_fd(char c, int fd);`  
   **Description :** Écrit un caractère dans un descripteur de fichier.

9. **ft_putstr_fd**  
   **Prototype :** `void ft_putstr_fd(char *s, int fd);`  
   **Description :** Écrit une chaîne dans un descripteur de fichier.

10. **ft_putendl_fd**  
    **Prototype :** `void ft_putendl_fd(char *s, int fd);`  
    **Description :** Écrit une chaîne suivie d'un retour à la ligne dans un descripteur de fichier.

11. **ft_putnbr_fd**  
    **Prototype :** `void ft_putnbr_fd(int n, int fd);`  
    **Description :** Écrit un entier dans un descripteur de fichier.

### Partie bonus - Fonctions de manipulation de listes chaînées

1. **ft_lstnew**  
   **Prototype :** `t_list *ft_lstnew(void *content);`  
   **Description :** Crée un nouvel élément de liste chaînée.

2. **ft_lstadd_front**  
   **Prototype :** `void ft_lstadd_front(t_list **lst, t_list *new);`  
   **Description :** Ajoute un élément au début de la liste chaînée.

3. **ft_lstsize**  
   **Prototype :** `int ft_lstsize(t_list *lst);`  
   **Description :** Compte le nombre d'éléments dans la liste chaînée.

4. **ft_lstlast**  
   **Prototype :** `t_list *ft_lstlast(t_list *lst);`  
   **Description :** Retourne le dernier élément de la liste chaînée.

5. **ft_lstadd_back**  
   **Prototype :** `void ft_lstadd_back(t_list **lst, t_list *new);`  
   **Description :** Ajoute un élément à la fin de la liste chaînée.

6. **ft_lstdelone**  
   **Prototype :** `void ft_lstdelone(t_list *lst, void (*del)(void *));`  
   **Description :** Libère la mémoire d'un élément de la liste.

7. **ft_lstclear**  
   **Prototype :** `void ft_lstclear(t_list **lst, void (*del)(void *));`  
   **Description :** Supprime et libère tous les éléments de la liste.

8. **ft_lstiter**  
   **Prototype :** `void ft_lstiter(t_list *lst, void (*f)(void *));`  
   **Description :** Applique une fonction à chaque élément de la liste.

9. **ft_lstmap**  
   **Prototype :** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`  
   **Description :** Crée une nouvelle liste en appliquant une fonction à chaque élément.
