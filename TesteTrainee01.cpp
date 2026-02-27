#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Digite a string: ");
    scanf("%s", s);

    int maiorCount = 1;
    char maiorChar = s[0];

    int count = 1;
    int tamanho = strlen(s);

    for (int i = 1; i < tamanho; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            if (count > maiorCount) {
                maiorCount = count;
                maiorChar = s[i - 1];
            }
            count = 1;
        }
    }

    // Utilizei para verificar a ultima sequência
    if (count > maiorCount) {
        maiorCount = count;
        maiorChar = s[tamanho - 1];
    }

    printf("Resultado: (%c, %d)\n", maiorChar, maiorCount);

    return 0;
}
