#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    // Test ft_strlen
    char *str = "Hello, World!";
    printf("ft_strlen("%s") = %zu\n", str, ft_strlen(str));

    // Test ft_memset
    char buffer[50];
    strcpy(buffer, "This is a test.");
    ft_memset(buffer, '*', 4);
    printf("ft_memset: %s\n", buffer);

    // Test ft_isalpha
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));

    // Test ft_atoi
    printf("ft_atoi("123") = %d\n", ft_atoi("123"));
    printf("ft_atoi("-42") = %d\n", ft_atoi("-42"));

    // Test ft_isdigit
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));

    // Test ft_isalnum
    printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
    printf("ft_isalnum('5') = %d\n", ft_isalnum('5'));
    printf("ft_isalnum('$') = %d\n", ft_isalnum('$'));

    // Test ft_strchr
    printf("ft_strchr("Hello, World!", 'W') = %s\n", ft_strchr("Hello, World!", 'W'));

    // Test ft_strrchr
    printf("ft_strrchr("Hello, World!", 'o') = %s\n", ft_strrchr("Hello, World!", 'o'));

    // Test ft_toupper and ft_tolower
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));

    // Test ft_memcpy
    char src[50] = "Hello";
    char dst[50];
    ft_memcpy(dst, src, 5);
    printf("ft_memcpy: %s\n", dst);

    // Test ft_memmove
    char memmove_src[50] = "OverlapTest";
    ft_memmove(memmove_src + 4, memmove_src, 8);
    printf("ft_memmove: %s\n", memmove_src);

    // Test ft_strncmp
    printf("ft_strncmp("abc", "abd", 2) = %d\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strncmp("abc", "abd", 3) = %d\n", ft_strncmp("abc", "abd", 3));

    // Test ft_memchr
    printf("ft_memchr("Hello", 'o', 5) = %s\n", (char *)ft_memchr("Hello", 'o', 5));

    // Test ft_memcmp
    printf("ft_memcmp("abc", "abd", 2) = %d\n", ft_memcmp("abc", "abd", 2));

    // Test ft_strnstr
    printf("ft_strnstr("Hello, World!", "World", 12) = %s\n", ft_strnstr("Hello, World!", "World", 12));

    // Test ft_calloc and ft_strdup
    char *dup = ft_strdup("Libft is fun!");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    // Test ft_substr
    char *substr = ft_substr("Hello, World!", 7, 5);
    printf("ft_substr: %s\n", substr);
    free(substr);

    // Test ft_strjoin
    char *joined_str = ft_strjoin("Hello, ", "World!");
    printf("ft_strjoin: %s\n", joined_str);
    free(joined_str);

    // Test ft_strtrim
    char *trimmed_str = ft_strtrim("   Hello, World!   ", " ");
    printf("ft_strtrim: %s\n", trimmed_str);
    free(trimmed_str);

    // Test ft_split
    char **split = ft_split("This is a test", ' ');
    for (int i = 0; split[i]; i++) {
        printf("ft_split[%d]: %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);

    // Test ft_itoa
    char *itoa_result = ft_itoa(-12345);
    printf("ft_itoa: %s\n", itoa_result);
    free(itoa_result);

    // Test ft_strmapi
    char *mapped_str = ft_strmapi("abc", [](unsigned int i, char c) { return c + i; });
    printf("ft_strmapi: %s\n", mapped_str);
    free(mapped_str);

    // Test ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
    ft_putchar_fd('A', 1);
    printf("\n");
    ft_putstr_fd("Hello, fd!\n", 1);
    ft_putendl_fd("This is the end!", 1);
    ft_putnbr_fd(-12345, 1);
    printf("\n");

    return 0;
}
