#include <stdio.h>
#include <string.h>
#include <ctype.h>

/// @brief Definição da estrutura que armazenará os dados das Cartas do jogo

typedef struct
{
    char estado[20],cidade[50], codigoCarta[20];
    int populacao, pontosTuristicos;
    float area, PIB;
} Carta;

// Função que calcula a Densidade populacional
float densPolu(float p,float a){
   float densidade = p/a;
   return densidade;
}

// função que calula o PIB Per Capita
float pibPerCapita(float produto,int pessoa){
    float perCapita = (produto*1000000)/pessoa;
    return perCapita;
 }
// Função que calcula o super poder da carta
 float superPower (float area,float populacao,float pontosTuristicos,float PIB, float densidadeDemografica ,float pibPercapita){
    float super = area + populacao + pontosTuristicos + PIB + densidadeDemografica + pibPercapita;
    return super;
 }


int main(){
    int c1, c2;
    char atributo[50];
    Carta carta1; // Define uma variável do tipo de estrutura Carta, criada acima


    //Abaixo segue as solicitações para entrada dos dados das cartas
    printf("Digite a qual estado a cidade pertence: \n");
    fgets(carta1.estado, 20, stdin);

    carta1.estado[strcspn(carta1.estado, "\n")] = '\0'; // Remove o '\n' de fgets

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

    getchar();

    printf("\nAgora entraremos com os dados da segunda carta\n");
    printf("\n");

    Carta carta2; // Define uma variável do tipo de estrutura Carta, criada acima


    //Abaixo segue as solicitações para entrada dos dados das cartas
    printf("Digite a qual estado a cidade pertence: \n");
    fgets(carta2.estado, 20, stdin);

    carta2.estado[strcspn(carta2.estado, "\n")] = '\0'; // Remove o '\n' de fgets

    printf("Digite o codigo da Cidade: \n");
    fgets(carta2.codigoCarta, 20, stdin);

    carta2.codigoCarta[strcspn(carta2.codigoCarta, "\n")] = '\0'; // Remove o '\n' de fgets

    printf("Digite o nome da cidade: \n");
    fgets(carta2.cidade,50, stdin);

    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0'; // Remove o '\n' de fgets

    printf("Informe a área da cidade: \n");
    scanf("%f", &carta2.area);

    printf("Informe a população da cidade: \n");
    scanf("%d", &carta2.populacao);

    printf("Informe quantos pontos Turísticos a cidade possui: \n");
    scanf("%d", &carta2.pontosTuristicos);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &carta2.PIB);

    getchar();
    
    
    // Exibindo os dados cadastrados
    printf("\n🔹 Cidade Cadastrada 🔹\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Área: %.2f km²\n", carta1.area);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("PIB: %.2f milhões\n", carta1.PIB);
    printf("Densidade Populacional: %.2f\n", densPolu(carta1.populacao, carta1.area));
    printf("PIB Per Capita: %.2f\n", pibPerCapita(carta1.PIB, carta1.populacao));
    printf("Super Poder: %.2f\n", superPower(carta1.area, carta1.populacao,carta1.pontosTuristicos,carta1.PIB, densPolu(carta1.populacao, carta1.area),pibPerCapita(carta1.PIB, carta1.populacao )));


    printf("\n🔹 Cidade Cadastrada 🔹\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Área: %.2f km²\n", carta2.area);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("PIB: %.2f milhões\n", carta2.PIB);
    printf("Densidade Populacional: %.2f\n", densPolu(carta2.populacao, carta2.area));
    printf("PIB Per Capita: %.2f\n", pibPerCapita(carta2.PIB, carta2.populacao));
    printf("Super Poder: %.2f\n", superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )));

    
    // Comparação das cartas com IF (Área)
    if (carta1.area > carta2.area)
    {
        printf("\nÁrea: Carta 1 venceu (1)\n");

        ++c1;
        
    } else if (carta1.area == carta2.area)
    {
        printf("\nÁrea: Empate, ninguem pontua\n");
    } else {
        printf ("\nÁrea: Carta 2 venceu (1)\n");
        ++c2;
    }
    
    //Comparação das cartas com IF(População)
    if (carta1.populacao > carta2.populacao)
    {
        printf("População: Carta 1 venceu (1)\n");

        ++c1;
        
    } else if (carta1.populacao == carta2.populacao)
    {
        printf("População: Empate, ninguem pontua\n");
    } else {
        printf ("População: Carta 2 venceu (1)\n");
        ++c2;
    }
    
    //Comparação das cartas com IF(Pontos turisticos)
    if (carta1.pontosTuristicos > carta2.pontosTuristicos)
    {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");

        ++c1;
        
    } else if (carta1.pontosTuristicos == carta2.pontosTuristicos)
    {
        printf("Pontos Turisticos: Empate, ninguem pontua\n");
    } else {
        printf ("Pontos Turisticos: Carta 2 venceu (1)\n");
        ++c2;
    }
    //Comparação das cartas com IF(PIB)
    if (carta1.PIB > carta2.PIB)
    {
        printf("PIB: Carta 1 venceu (1)\n");

        ++c1;
        
    } else if (carta1.PIB == carta2.PIB)
    {
        printf("PIB: Empate, ninguem pontua\n");
    } else {
        printf ("PIB: Carta 2 venceu (1)\n");
        ++c2;
    }
    //Comparação das cartas com IF(Densidade Demogáfica)
    if (densPolu(carta1.populacao, carta1.area) > densPolu(carta2.populacao, carta2.area))
    {
        printf("Densidade Demográfica: Carta 2 venceu (1)\n");

        ++c2;
        
    } else if ((densPolu(carta1.populacao, carta1.area)) < (densPolu(carta2.populacao, carta2.area)))
    {
        printf("Densidade Demográfica: Carta 1 venceu (1)\n");
        ++c1;
    } else {
        printf ("Densidade Demográfica: Empate, ninguem pontua\n");

    }
    //Comparação das cartas com IF(PIB Per Capita)
    if (pibPerCapita(carta1.PIB, carta1.populacao) > pibPerCapita(carta2.PIB, carta2.populacao))
    {
        printf("PIB Per Capita: Carta 1 venceu (1)\n");

        ++c1;
        
    } else if ((pibPerCapita(carta1.PIB, carta1.populacao)) < (pibPerCapita(carta2.PIB, carta2.populacao)))
    {
        printf("PIB Per Capita: Carta 2 venceu (1)\n");
        ++c2;
    } else {
        printf ("PIB Per Capita: Empate, ninguem pontua\n");

    }
    //Comparação das cartas com IF(Super poder)
    if (superPower(carta1.area, carta1.populacao,carta1.pontosTuristicos,carta1.PIB, densPolu(carta1.populacao, carta1.area),pibPerCapita(carta1.PIB, carta1.populacao )) > superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )))
    {
        printf("Super Poder: Carta 1 venceu (1)\n");

        ++c1;
        
    } else if (superPower(carta1.area, carta1.populacao,carta1.pontosTuristicos,carta1.PIB, densPolu(carta1.populacao, carta1.area),pibPerCapita(carta1.PIB, carta1.populacao )) < superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )))
    {
        printf("Super Poder: Carta 2 venceu (1)\n");
        ++c2;
    } else {
        printf ("Super Poder: Empate, ninguem pontua\n");

    }

    if (c1>c2)
    {
        printf ("\nO vencedor foi a Carta 1 \n");
    } else if(c1<c2){
        printf("\nO vencedor foi a carta 2 \n");
    } else{
        printf("\nHouve um empate entre as Cartas\n");
    }
    



    printf("\nDigite o atributo que deseja comparar:\n1 - Área\n2 - População\n3 - Pontos Turísticos\n4 - PIB\n5 - Densidade Demográfica\n6 - PIB Per Capita\n7 - Super Poder\n");
    fgets(atributo,20,stdin);

    atributo[strcspn(atributo, "\n")] = '\0';

    atributo[50] = tolower(atributo[50]);

    // Verificar qual atributo foi escolhido e inofrmar o vencendor
    if (strcmp(atributo, "Área") == 0 || atributo, "1" == 0) {
        printf("Você escolheu comparar o à Área!\n");
        if (carta1.area > carta2.area)
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 Venceu\n",
                carta1.cidade, carta1.area, 
                carta2.cidade, carta2.area);
        } else if (carta1.area < carta2.area)
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 Venceu\n",
                carta1.cidade, carta1.area, 
                carta2.cidade, carta2.area);
        } else printf("Não há vencedores");
        
        
    } else if (strcmp(atributo, "População") == 0 || strcmp(atributo, "2") == 0) {
        printf("Você escolheu comparar o População!\n");
        if (carta1.populacao > carta2.populacao)
        {
            printf("\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 Venceu\n",
                carta1.cidade, carta1.populacao, 
                carta2.cidade, carta2.populacao);
        } else if (carta1.populacao < carta2.populacao)
        {
            printf("\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 Venceu\n",
                carta1.cidade, carta1.populacao, 
                carta2.cidade, carta2.populacao);
        } else printf("Não há vencedores");

    } else if (strcmp(atributo, "Pontos Turísticos") == 0 ||strcmp(atributo, "3") == 0) {
        printf("Você escolheu comparar o Pontos Turísticos!\n");
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 Venceu\n",
                carta1.cidade, carta1.pontosTuristicos, 
                carta2.cidade, carta2.pontosTuristicos);
        } else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 Venceu\n",
                carta1.cidade, carta1.pontosTuristicos, 
                carta2.cidade, carta2.pontosTuristicos);
        } else printf("Não há vencedores");
    
    } else if (strcmp(atributo, "PIB") == 0 || strcmp(atributo, "4") == 0) {
        printf("Você escolheu comparar o PIB!\n");
        if (carta1.PIB > carta2.PIB)
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 Venceu\n",
                carta1.cidade, carta1.PIB, 
                carta2.cidade, carta2.PIB);
        } else if (carta1.PIB < carta2.PIB)
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 Venceu\n",
                carta1.cidade, carta1.PIB, 
                carta2.cidade, carta2.PIB);
        } else printf("Não há vencedores");

    } else if (strcmp(atributo, "Densidade Demográfica") == 0 || strcmp(atributo, "5") == 0) {
        printf("Você escolheu comparar o Densidade Demográfica!\n");
        if ((densPolu(carta1.populacao, carta1.area)) > (densPolu(carta2.populacao, carta2.area)))
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 Venceu\n",
                carta1.cidade, (densPolu(carta1.populacao, carta1.area)), 
                carta2.cidade, (densPolu(carta2.populacao, carta2.area)));
        } else if ((densPolu(carta1.populacao, carta1.area)) > (densPolu(carta2.populacao, carta2.area)))
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 Venceu\n",
                carta1.cidade, (densPolu(carta1.populacao, carta1.area)), 
                carta2.cidade, (densPolu(carta2.populacao, carta2.area)));
        } else printf("Não há vencedores");

    } else if (strcmp(atributo, "Pib Per Capita") == 0 || (atributo, "5") == 0) {
        printf("Você escolheu comparar o PIB Per Capita!\n");
        if ((pibPerCapita(carta1.populacao, carta1.area)) > (pibPerCapita(carta2.populacao, carta2.area)))
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 Venceu\n",
                carta1.cidade, (pibPerCapita(carta1.populacao, carta1.area)), 
                carta2.cidade, (pibPerCapita(carta2.populacao, carta2.area)));
        } else if ((pibPerCapita(carta1.populacao, carta1.area)) > (pibPerCapita(carta2.populacao, carta2.area)))
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 Venceu\n",
                carta1.cidade, (pibPerCapita(carta1.populacao, carta1.area)), 
                carta2.cidade, (pibPerCapita(carta2.populacao, carta2.area)));
        } else printf("Não há vencedores");
        
    } else if (strcmp(atributo, "Super Poder") == 0 || strcmp(atributo, "7") == 0) {
        printf("Você escolheu comparar o Super Poder!\n");
        if (superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )) > superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )))
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 Venceu\n",
                carta1.cidade, (superPower(carta1.area, carta1.populacao,carta1.pontosTuristicos,carta1.PIB, densPolu(carta1.populacao, carta1.area),pibPerCapita(carta1.PIB, carta1.populacao )))), 
                carta2.cidade, (superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )));
        } else if (superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao )) > superPower(carta1.area, carta1.populacao,carta1.pontosTuristicos,carta1.PIB, densPolu(carta1.populacao, carta1.area),pibPerCapita(carta1.PIB, carta1.populacao )))
        {
            printf("\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 Venceu\n",
                carta1.cidade, (superPower(carta1.area, carta1.populacao,carta1.pontosTuristicos,carta1.PIB, densPolu(carta1.populacao, carta1.area),pibPerCapita(carta1.PIB, carta1.populacao ))),
                carta2.cidade, (superPower(carta2.area, carta2.populacao,carta2.pontosTuristicos,carta2.PIB, densPolu(carta2.populacao, carta2.area),pibPerCapita(carta2.PIB, carta2.populacao ))));
        } else printf("Não há vencedores");
    } else {
        printf("Atributo inválido!\n");

return 0;

}

}