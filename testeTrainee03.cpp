#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// utilizei para pegar o último sobrenome
void ultimoNome(char nome[], char sobrenome[]) {
    int i = strlen(nome) - 1;
    int j = 0;

    while (i >= 0 && nome[i] != ' ') {
        i--;
    }
    i++;

    while (nome[i] != '\0') {
        sobrenome[j++] = nome[i++];
    }
    sobrenome[j] = '\0';
}

int comparar(const void *a, const void *b) {
    char *nomeA = (char *)a;
    char *nomeB = (char *)b;

    char ultA[50], ultB[50];

    ultimoNome(nomeA, ultA);
    ultimoNome(nomeB, ultB);

    int cmp = strcmp(ultA, ultB);
    if (cmp != 0)
        return cmp;

    return strcmp(nomeA, nomeB);
}

int main() {
    int n;
    printf("Quantos nomes? ");
    scanf("%d", &n);
    getchar();

    char nomes[MAX][100];

    for (int i = 0; i < n; i++) {
        fgets(nomes[i], 100, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;
    }

    qsort(nomes, n, sizeof(nomes[0]), comparar);

    printf("\nOrdenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
