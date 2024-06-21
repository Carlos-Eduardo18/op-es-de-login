/* Faça um código com validação de Login. Se aprovado, apresente um Menu com 3 opções (abaixo).

a. Se selecionar a opção 1, realizar a atividade 1.
b. Se selecionar a opção 2, realizar a atividade 3.
c. Se selecionar a opção 3, realizar a atividade 4. */

#include <stdio.h>
#include <string.h>

int main() {
    // Definição do nome de usuário e senha corretos
    char nameCorreto[] = "carlos";
    char passCorreto[] = "123";

    // Variáveis para armazenar o nome de usuário e a senha digitados pelo usuário
    char user[50];
    char p[50];

    // Solicita ao usuário que insira o nome de usuário e a senha
    printf("Login\n------\n");
    printf("Nome de usuario: ");
    scanf("%s", user);
    printf("Senha: ");
    scanf("%s", p);

    // Verifica se o nome de usuário e a senha estão corretos
    if (strcmp(user, nameCorreto) == 0 && strcmp(p, passCorreto) == 0) {
        printf("Login realizado com sucesso!\n");

        // Menu de opções
        int opcao;
        do {
            printf("\nMenu de Opcoes\n-------------\n");
            printf("1. Atividade 1\n");
            printf("2. Atividade 2\n");
            printf("3. Atividade 3\n");
            printf("4. Sair\n");
            printf("Selecione uma opcao: ");
            scanf("%d", &opcao);

            // Executa a opção selecionada pelo usuário
            switch(opcao) {
                case 1:
                    printf("\nAtividade 1 selecionada.\n");
                    // Código para a atividade 1
                    break;
                case 2:
                    printf("\nAtividade 2 selecionada.\n");
                    // Código para a atividade 2
                    break;
                case 3:
                    printf("\nAtividade 3 selecionada.\n");
                    // Código para a atividade 3
                    break;
                case 4:
                    printf("\nSaindo...\n");
                    break;
                default:
                    printf("\nOpcao invalida. Por favor, selecione uma opcao valida.\n");
            }
        } while(opcao != 4); // Repete o menu até que o usuário selecione a opção de sair (opção 4)

    } else {
        printf("Nome de usuario ou senha incorretos. Falha no login.\n");
    }

    return 0;
}