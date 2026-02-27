#include <stdio.h>

int main() {
    int n;
    printf("Quantos numeros voce deseja? ");
    scanf("%d", &n);
    printf("Digite os numeros: ");
    int nums[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Digite o target: ");
    scanf("%d", &target);

    int melhorI = -1, melhorJ = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                if (melhorJ == -1 || j < melhorJ) {
                    melhorI = i;
                    melhorJ = j;
                }
            }
        }
    }

    printf("Indices: (%d, %d)\n", melhorI, melhorJ);

    return 0;
}
