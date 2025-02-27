📌 Estrutura de Dados para Armazenar Cartas de um Jogo em C

Este projeto em C implementa uma estrutura para armazenar informações sobre cartas de um jogo, utilizando structs. O código permite que o usuário insira os dados de uma cidade e exibe as informações cadastradas.

🚀 Funcionalidades

✅ Armazena informações sobre uma cidade, incluindo:

Estado (ex: MG, SP, RJ)

Código da cidade

Nome da cidade

Área da cidade (km²)

População

Número de pontos turísticos

PIB da cidade (em bilhões)

✅ Entrada de dados corrigida para evitar erros como segmentation fault.
✅ Exibição formatada das informações inseridas.

🛠 Estrutura do Código

1️⃣ Definição da Struct

O código utiliza a estrutura typedef struct para armazenar os dados da cidade:

typedef struct {
    char estado[3], cidade[50], codigoCarta[20];
    int populacao, pontosTuristicos;
    float area, PIB;
} Carta;

estado[3] → Armazena a sigla do estado (ex: "MG", "SP").

cidade[50] → Nome da cidade.

codigoCarta[20] → Código identificador da cidade no jogo.

area → Área total da cidade (em km²).

populacao → Número de habitantes.

pontosTuristicos → Quantidade de pontos turísticos.

PIB → PIB da cidade (em bilhões).

2️⃣ Entrada de Dados

O código solicita que o usuário informe os dados da cidade. Algumas correções foram feitas:

Uso de scanf("%2s", carta1.estado); → Limita a entrada para no máximo 2 caracteres.

Adição de getchar(); após scanf() → Remove o \n que pode interferir no fgets().

Uso correto de fgets() → Lê strings corretamente sem corromper memória.

Exemplo de entrada:

MG
C123
Belo Horizonte
331.4
2512070
15
110.5

3️⃣ Exibição dos Dados

Após a entrada, os dados são impressos na tela:

printf("\n🔹 Cidade Cadastrada 🔹\n");
printf("Estado: %s\n", carta1.estado);
printf("Código: %s\n", carta1.codigoCarta);
printf("Cidade: %s\n", carta1.cidade);
printf("Área: %.2f km²\n", carta1.area);
printf("População: %d habitantes\n", carta1.populacao);
printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
printf("PIB: %.2f bilhões\n", carta1.PIB);

Saída esperada:

🔹 Cidade Cadastrada 🔹
Estado: MG
Código: C123
Cidade: Belo Horizonte
Área: 331.40 km²
População: 2512070 habitantes
Pontos Turísticos: 15
PIB: 110.50 bilhões

🏗 Como Compilar e Executar

1️⃣ Compile o código com gcc:

gcc cartas_jogo.c -o cartas

2️⃣ Execute o programa:

./cartas

⚠️ Possíveis Problemas e Soluções

❌ Segmentation fault (erro de memória)
✅ Solução: Certifique-se de usar getchar(); após scanf() e não use & em fgets().