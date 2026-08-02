#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

void esperar() {
    printf("\nPressione Enter para continuar...\n");
    while(getchar() != '\n');
}

void test_ft_atoi() {
    printf("\n=== ft_atoi ===\n");
    printf("Função que converte uma string em inteiro.\n");
    printf("Exemplo automático: ft_atoi(\"   -42abc\") = %d\n", ft_atoi("   -42abc"));
    char entrada[100];
    printf("Digite uma string para converter em inteiro: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = 0;
    int resultado = ft_atoi(entrada);
    printf("Resultado: %d\n", resultado);
    esperar();
}

void test_ft_itoa() {
    printf("\n=== ft_itoa ===\n");
    printf("Função que converte um inteiro para string.\n");
    printf("Exemplo automático: ft_itoa(-12345) = \"%s\"\n", ft_itoa(-12345));
    int num;
    printf("Digite um número inteiro para converter em string: ");
    scanf("%d", &num); getchar();
    char *str = ft_itoa(num);
    printf("Resultado: \"%s\"\n", str);
    free(str);
    esperar();
}

void test_ft_strlen() {
    printf("\n=== ft_strlen ===\n");
    printf("Função que retorna o comprimento de uma string.\n");
    char entrada[100];
    printf("Digite uma string: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = 0;
    printf("Comprimento: %zu\n", ft_strlen(entrada));
    esperar();
}

void test_ft_strdup() {
    printf("\n=== ft_strdup ===\n");
    printf("Função que duplica uma string em uma nova área de memória.\n");
    char entrada[100];
    printf("Digite uma string para duplicar: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = 0;
    char *dup = ft_strdup(entrada);
    printf("Cópia criada: \"%s\"\n", dup);
    free(dup);
    esperar();
}

void test_ft_strjoin() {
    printf("\n=== ft_strjoin ===\n");
    printf("Função que concatena duas strings em uma nova string.\n");
    char s1[100], s2[100];
    printf("Digite a primeira string: ");
    fgets(s1, sizeof(s1), stdin); s1[strcspn(s1, "\n")] = 0;
    printf("Digite a segunda string: ");
    fgets(s2, sizeof(s2), stdin); s2[strcspn(s2, "\n")] = 0;
    char *joined = ft_strjoin(s1, s2);
    printf("Resultado da concatenação: \"%s\"\n", joined);
    free(joined);
    esperar();
}

void test_ft_split() {
    printf("\n=== ft_split ===\n");
    printf("Função que divide uma string em várias, usando um caractere delimitador.\n");
    char entrada[100], delim;
    printf("Digite a string para dividir: ");
    fgets(entrada, sizeof(entrada), stdin); entrada[strcspn(entrada, "\n")] = 0;
    printf("Digite o delimitador (um caractere): ");
    delim = getchar(); getchar();
    char **tokens = ft_split(entrada, delim);
    printf("Resultado:\n");
    for (int i = 0; tokens && tokens[i]; i++) {
        printf("  [%d]: \"%s\"\n", i, tokens[i]);
        free(tokens[i]);
    }
    free(tokens);
    esperar();
}

void test_ft_isalpha_isdigit_isalnum() {
    printf("\n=== ft_isalpha / ft_isdigit / ft_isalnum ===\n");
    printf("Testa se um caractere é letra, dígito ou alfanumérico.\n");
    char entrada;
    printf("Digite um caractere: ");
    entrada = getchar(); getchar();
    printf("ft_isalpha('%c') = %d\n", entrada, ft_isalpha(entrada));
    printf("ft_isdigit('%c') = %d\n", entrada, ft_isdigit(entrada));
    printf("ft_isalnum('%c') = %d\n", entrada, ft_isalnum(entrada));
    esperar();
}

void test_ft_memset() {
    printf("\n=== ft_memset ===\n");
    printf("Preenche um bloco de memória com um valor.\n");
    char buf[20] = "abcdefghijklmnop";
    printf("Antes: \"%s\"\n", buf);
    printf("Preenchendo os 5 primeiros bytes com 'X'...\n");
    ft_memset(buf, 'X', 5);
    printf("Depois: \"%s\"\n", buf);
    esperar();
}

void test_ft_calloc_bzero() {
    printf("\n=== ft_calloc & ft_bzero ===\n");
    printf("Aloca memória zerada (calloc) e zera um bloco (bzero).\n");
    char *buf = ft_calloc(10, 1);
    printf("Primeiros 10 bytes alocados zerados: ");
    for (int i = 0; i < 10; i++) printf("%02x ", (unsigned char)buf[i]);
    printf("\nAgora escrevendo 'A' nos 10 bytes e usando ft_bzero...\n");
    memset(buf, 'A', 10);
    ft_bzero(buf, 10);
    printf("Depois de bzero: ");
    for (int i = 0; i < 10; i++) printf("%02x ", (unsigned char)buf[i]);
    printf("\n");
    free(buf);
    esperar();
}

void test_ft_substr() {
    printf("\n=== ft_substr ===\n");
    printf("Extrai uma substring de uma string, a partir de um índice e tamanho.\n");
    char entrada[100];
    int inicio, tamanho;
    printf("Digite a string: ");
    fgets(entrada, sizeof(entrada), stdin); entrada[strcspn(entrada, "\n")] = 0;
    printf("Índice inicial: ");
    scanf("%d", &inicio);
    printf("Tamanho: ");
    scanf("%d", &tamanho); getchar();
    char *sub = ft_substr(entrada, inicio, tamanho);
    printf("Substring extraída: \"%s\"\n", sub);
    free(sub);
    esperar();
}

int main() {
    printf("Bem-vindo ao Tutorial Interativo da sua Libft!\n");
    printf("Vamos testar (e explicar) as funções principais da sua biblioteca.\n");
    esperar();

    test_ft_atoi();
    test_ft_itoa();
    test_ft_strlen();
    test_ft_strdup();
    test_ft_strjoin();
    test_ft_split();
    test_ft_isalpha_isdigit_isalnum();
    test_ft_memset();
    test_ft_calloc_bzero();
    test_ft_substr();

    printf("\n=== Fim do tutorial interativo! ===\n");
    printf("Sinta-se livre para adaptar ou expandir este arquivo para testar outras funções da sua libft :)\n");
    return 0;
}
