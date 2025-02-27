#include <stdio.h>
#include <string.h>


/// @brief Definição da estrutura que armazenará os dados das Cartas do jogo

typedef struct
{
    char estado,cidade[50], codigoCarta[20];
    int populacao, pontosTuristicos;
    float area, PIB;
} Carta;


int main(){
    Carta carta1; // Define uma variável do tipo de estrutura Carta, criada acima


    //Abaixo segue as solicitações para entrada dos dados das cartas
    printf("Digite a qual estado a cidade pertence: \n");
    scanf("%c", &carta1.estado);

    getchar();//remove o \n deixado pelo scanf pois pode causar erros de conflito com o fgets

    printf("Digite o codigo da Cidade: \n");
    fgets(carta1.codigoCarta, 20, stdin);

    carta1.codigoCarta[strcspn(carta1.codigoCarta, "\n")] = '\0'; // Remove o '\n' de fgets

    printf("Digite o nome da cidade: \n");
    fgets(carta1.cidade,50, stdin);

    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0'; // Remove o '\n' de fgets

    printf("Informe a área da cidade: \n");
    scanf("%f", &carta1.area);

    printf("Informe a população da cidade: \n");
    scanf("%d", &carta1.populacao);

    printf("Informe quantos pontos Turísticos a cidade possui: \n");
    scanf("%d", &carta1.pontosTuristicos);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &carta1.PIB);

    // Exibindo os dados cadastrados
    printf("\n🔹 Cidade Cadastrada 🔹\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Área: %.2f km²\n", carta1.area);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("PIB: %.2f bilhões\n", carta1.PIB);

    return 0;
}