#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

// Helper: print buffer as hex
void print_hex(const void *buf, size_t n) {
    const unsigned char *p = buf;
    for (size_t i = 0; i < n; i++)
        printf("%02x ", p[i]);
    printf("\n");
}

void test_ft_atoi() {
    printf("==== ft_atoi ====\n");
    const char *tests[] = {
        "42", "-42", "    42", "+42", "0042", "42abc", "abc42", "", "   ", NULL,
        "2147483647", "-2147483648", "999999999999999999999999", "-99999999999999999999999"
    };
    for (int i = 0; i < (int)(sizeof(tests)/sizeof(tests[0])); i++) {
        int r = ft_atoi(tests[i]);
        printf("ft_atoi(\"%s\") = %d\n", tests[i] ? tests[i] : "NULL", r);
    }
}

void test_ft_itoa() {
    printf("==== ft_itoa ====\n");
    int tests[] = {0, 1, -1, INT_MAX, INT_MIN, 123456, -654321};
    for (size_t i = 0; i < sizeof(tests)/sizeof(tests[0]); i++) {
        char *s = ft_itoa(tests[i]);
        printf("ft_itoa(%d) = \"%s\"\n", tests[i], s);
        free(s);
    }
}

void test_ft_bzero() {
    printf("==== ft_bzero ====\n");
    char buf[10] = "abcdefghi";
    printf("before: %s\n", buf);
    ft_bzero(buf+2, 5);
    printf("after:  ");
    print_hex(buf, 10);
}

void test_ft_calloc() {
    printf("==== ft_calloc ====\n");
    char *p = ft_calloc(5, 4);
    printf("calloc(5,4): ");
    print_hex(p, 20);
    free(p);

    p = ft_calloc(SIZE_MAX, 2); // overflow
    printf("calloc(SIZE_MAX,2): %s\n", p ? "NOT NULL (bad!)" : "NULL (good)");
}

void test_ft_isalpha_digit_ascii_print_alnum() {
    printf("==== ft_isalpha/digit/print/alnum/ascii ====\n");
    int vals[] = {'A', 'z', '0', 0, 127, 128, -1, '!', ' '};
    for (size_t i = 0; i < sizeof(vals)/sizeof(vals[0]); i++) {
        printf("c=%d: isalpha=%d, isdigit=%d, isprint=%d, isalnum=%d, isascii=%d\n",
               vals[i], ft_isalpha(vals[i]), ft_isdigit(vals[i]), ft_isprint(vals[i]),
               ft_isalnum(vals[i]), ft_isascii(vals[i]));
    }
}

void test_ft_memset_memcpy_memmove_memchr_memcmp() {
    printf("==== ft_memset/memcpy/memmove/memchr/memcmp ====\n");
    char buf1[20] = "1234567890abcdefgh";
    ft_memset(buf1+3, 'X', 5);
    printf("memset: %s\n", buf1);

    char src[] = "abcdef";
    char dst[10] = "123456789";
    ft_memcpy(dst, src, 6);
    printf("memcpy: %s\n", dst);

    char overlap[20] = "1234567890";
    ft_memmove(overlap+2, overlap, 8);
    printf("memmove overlap: %s\n", overlap);

    char *found = ft_memchr(overlap, '3', 10);
    printf("memchr: %s\n", found ? found : "NULL");

    int cmp = ft_memcmp("abc", "abc", 3);
    printf("memcmp equal: %d\n", cmp);
    cmp = ft_memcmp("abc", "abd", 3);
    printf("memcmp diff: %d\n", cmp);
}

void test_ft_strlen_strdup_strchr_strrchr() {
    printf("==== ft_strlen/strdup/strchr/strrchr ====\n");
    const char *s = "abcdeabcde";
    printf("strlen: %zu\n", ft_strlen(s));
    char *dup = ft_strdup(s);
    printf("strdup: %s\n", dup);
    free(dup);
    char *c = ft_strchr(s, 'c');
    printf("strchr: %s\n", c ? c : "NULL");
    c = ft_strrchr(s, 'c');
    printf("strrchr: %s\n", c ? c : "NULL");
}

void test_ft_strncmp_strlcpy_strlcat() {
    printf("==== ft_strncmp/strlcpy/strlcat ====\n");
    printf("strncmp(\"abc\",\"abd\",2): %d\n", ft_strncmp("abc", "abd", 2));
    printf("strncmp(\"abc\",\"abc\",3): %d\n", ft_strncmp("abc", "abc", 3));
    char dst[10];
    size_t cpy = ft_strlcpy(dst, "abcdef", 4);
    printf("strlcpy: copied=%zu, dst=\"%s\"\n", cpy, dst);
    char dst2[12] = "abc";
    size_t cat = ft_strlcat(dst2, "defghijkl", 12);
    printf("strlcat: cat=%zu, dst2=\"%s\"\n", cat, dst2);
}

void test_ft_strtrim_substr() {
    printf("==== ft_strtrim/ft_substr ====\n");
    char *trimmed = ft_strtrim("  ---ababa---  ", " -");
    printf("strtrim: \"%s\"\n", trimmed);
    free(trimmed);
    char *substr = ft_substr("abcdef", 2, 3);
    printf("substr: \"%s\"\n", substr);
    free(substr);
}

void test_ft_strjoin_mapi_iteri() {
    printf("==== ft_strjoin/strmapi/striteri ====\n");
    char *joined = ft_strjoin("abc", "123");
    printf("strjoin: \"%s\"\n", joined);
    free(joined);

    char *mapped = ft_strmapi("abcd", [](unsigned int i, char c) { return c + 1; });
    printf("strmapi (c+1): \"%s\"\n", mapped);
    free(mapped);

    char s[] = "abcd";
    ft_striteri(s, [](unsigned int i, char *c) { *c = *c - 1; });
    printf("striteri (c-1): \"%s\"\n", s);
}

void test_ft_split() {
    printf("==== ft_split ====\n");
    char **arr = ft_split("abc--def-gh--", '-');
    for (int i = 0; arr && arr[i]; i++) {
        printf("split[%d]: \"%s\"\n", i, arr[i]);
        free(arr[i]);
    }
    free(arr);
}

void test_write_fd() {
    printf("==== ft_putchar_fd/putstr_fd/putendl_fd/putnbr_fd ====\n");
    int fd = open("libft_test_output.txt", O_CREAT|O_WRONLY|O_TRUNC, 0644);
    if (fd < 0) { perror("open"); return; }
    ft_putchar_fd('A', fd);
    ft_putstr_fd("BC", fd);
    ft_putendl_fd("DE", fd);
    ft_putnbr_fd(-12345, fd);
    write(fd, "\n", 1);
    close(fd);
    printf("Salvou saída de escrita em file descriptor em libft_test_output.txt\n");
}

int main() {
    test_ft_atoi();
    test_ft_itoa();
    test_ft_bzero();
    test_ft_calloc();
    test_ft_isalpha_digit_ascii_print_alnum();
    test_ft_memset_memcpy_memmove_memchr_memcmp();
    test_ft_strlen_strdup_strchr_strrchr();
    test_ft_strncmp_strlcpy_strlcat();
    test_ft_strtrim_substr();
    test_ft_strjoin_mapi_iteri();
    test_ft_split();
    test_write_fd();
    printf("=== TODOS OS TESTES EXECUTADOS ===\n");
    return 0;
}
