#include <stdio.h>
#include <string.h>

// Definição da estrutura que representa um território
struct Territorio {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
};

int main() {
    struct Territorio territorios[5];  // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n");

    // Laço para cadastro dos cinco territórios
    for (i = 0; i < 5; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        // Entrada do nome (com possibilidade de espaços)
        printf("Nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';  // Remove o '\n' que o fgets possa ter lido

        // Entrada da cor do exército
        printf("Cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        // Entrada da quantidade de tropas
        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar();  // Limpa o '\n' que ficou no buffer após o scanf
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territórios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome             : %s\n", territorios[i].nome);
        printf("Cor do exército  : %s\n", territorios[i].cor);
        printf("Quantidade tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
