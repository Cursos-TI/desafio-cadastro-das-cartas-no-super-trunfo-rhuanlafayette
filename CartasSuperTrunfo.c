#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 
       
        char pais[20], estadoA[20], estadoB[20], estadoC[20], estadoD[20], estadoE[20], estadoF[20], estadoG[20], estadoH[20];
        char cidade1A[20], cidade2A[20], cidade3A[20], cidade4A[20], cidade1B[20], cidade2B[20], cidade3B[20], cidade4B[20], cidade1C[20],
        cidade2C[20], cidade3C[20], cidade4C[20], cidade1D[20], cidade2D[20], cidade3D[20], cidade4D[20], cidade1E[20], cidade2E[20], cidade3E[20], cidade4E[20],
        cidade1F[20], cidade2F[20], cidade3F[20], cidade4F[20], cidade1G[20], cidade2G[20], cidade3G[20], cidade4G[20], cidade1H[20], cidade2H[20], cidade3H[20],
        cidade4H[20], codcarta1[20], codcarta2[20], codcarta3[20], codcarta4[20], codcarta5[20], codcarta6[20], codcarta7[20], codcarta8[20], codcarta9[20], codcarta10[20],
        codcarta11[20], codcarta12[20], codcarta13[20], codcarta14[20], codcarta15[20], codcarta16[20], codcarta17[20], codcarta18[20], codcarta19[20], codcarta20[20],
        codcarta21[20], codcarta22[20], codcarta23[20], codcarta24[20], codcarta25[20], codcarta26[20], codcarta27[20], codcarta28[20], codcarta29[20], codcarta30[20],
        codcarta31[20], codcarta32[20];
        int populacao1A, populacao2A, populacao3A, populacao4A, populacao1B, populacao2B, populacao3B, populacao4B,
        populacao1C, populacao2C, populacao3C, populacao4C, populacao1D, populacao2D, populacao3D, populacao4D,
        populacao1E, populacao2E, populacao3E, populacao4E, populacao1F, populacao2F, populacao3F, populacao4F,
        populacao1G, populacao2G, populacao3G, populacao4G, populacao1H, populacao2H, populacao3H, populacao4H;
        float area1A, area2A, area3A, area4A, area1B, area2B, area3B, area4B, area1C, area2C, area3C, area4C,
        area1D, area2D, area3D, area4D, area1E, area2E, area3E, area4E, area1F, area2F, area3F, area4F, area1G,
        area2G, area3G, area4G, area1H, area2H, area3H, area4H, PIB1A, PIB2A, PIB3A, PIB4A, PIB1B, PIB2B, PIB3B, PIB4B,
        PIB1C, PIB2C, PIB3C, PIB4C, PIB1D, PIB2D, PIB3D, PIB4D, PIB1E, PIB2E, PIB3E, PIB4E, PIB1F, PIB2F, PIB3F, PIB4F,
        PIB1G, PIB2G, PIB3G, PIB4G, PIB1H, PIB2H, PIB3H, PIB4H;
        int pt1A, pt2A, pt3A, pt4A, pt1B, pt2B, pt3B, pt4B, pt1C, pt2C, pt3C, pt4C, pt1D, pt2D, pt3D, pt4D,
        pt1E, pt2E, pt3E, pt4E, pt1F, pt2F, pt3F, pt4F, pt1G, pt2G, pt3G, pt4G, pt1H, pt2H, pt3H, pt4H;
    
    // Sabendo que são 8 estados com 4 cidades cada, será 32 cartas no total e 128 atributos, por isso declarei todas as variaveis para cada atributo logo no começo.
    //cada variavel declarada remete ao atributo necessario a ser cadastrado nas cartas, sendo a divisão de estados de A a H e a divisão de cidades de 1 a 4 por estado 
        printf("Desafio Cartas Super Trunfo \n"); //printf para informar o inicio 

    
        printf("Para começar o jogo, digite um nome para o Pais do jogo:\n"); //printf e scanf para solicitar o nome do pais
        scanf("%s", &pais);
    // Mesmo que o pais seja o mesmo para todas as 32 cartas, acredito ser interessante deixar o usuario informar o nome do país
       
        printf("Agora, digite um nome para o Estado que possuirá quatro cidades:\n");
        scanf("%s", &estadoA);
       // especifiquei "um nome", pois estava dando um erro ao utilizar espaço no scanf, o codigo entendia como dois valores diferentes
    
    // Sei que existe a possibilidade de pedir o valor das 4 variaveis em uma linha única de codigo, mas dividindo em varios printf torna a criação das cartas mais didático e informativo
        printf("Digite o codigo da sua primeira carta a ser criada. Sem espaços, por exemplo: A01, A02..\n");
        scanf("%s", &codcarta1);
        printf("Foi cadastrado como: %s\n", codcarta1); //printf para confimar com o usuario o valor cadastrado no scanf
        printf("Agora, o codigo da segunda carta: \n");
        scanf("%s", &codcarta2);
        printf("Foi cadastrado como: %s\n", codcarta2);
        printf("Agora, o codigo da terceira carta: \n");
        scanf("%s", &codcarta3);
        printf("Foi cadastrado como: %s\n", codcarta3);
        printf("Agora, o codigo da quarta carta: \n");
        scanf("%s", &codcarta4);
        printf("Foi cadastrado como: %s\n", codcarta4);

    //mais uma vez, dividi o printf e o scanf para cada variavel, de modo que o usuario fique ciente de cada campo sendo cadastrado
        printf("Agora, escolha apenas um nome para a primeira cidade do Estado: (Não usar nomes duplos) \n");
        scanf("%s", &cidade1A);
        printf("Foi cadastrado como: %s\n", cidade1A);
        printf("Agora, a cidade da segunda carta: \n");
        scanf("%s", &cidade2A);
        printf("Foi cadastrado como: %s\n", cidade2A);
        printf("Agora, a cidade da terceira carta: \n");
        scanf("%s", &cidade3A);
        printf("Foi cadastrado como: %s\n", cidade3A);
        printf("Agora, a cidade da quarta carta: \n");
        scanf("%s", &cidade4A);
        printf("Foi cadastrado como: %s\n", cidade4A);

    //a mesma divisão ocorreu para o cadastro do campo de população. Dessa vez no printf de confirmaçao de cadastro, adicionei o nome "habitantes" para melhor leitura dos dados cadastrados
        printf("Agora, informe a Populacao da primeira cidade: %s\n", cidade1A);
        scanf("%d", &populacao1A);
        printf("Foi cadastrado como: %d habitantes \n", populacao1A);
        printf("Agora, a população da segunda carta/cidade: %s\n", cidade2A);
        scanf("%d", &populacao2A);
        printf("Foi cadastrado como: %d habitantes \n", populacao2A);
        printf("Agora, a população da terceira carta/cidade: %s\n", cidade3A);
        scanf("%d", &populacao3A);
        printf("Foi cadastrado como: %d habitantes \n", populacao3A);
        printf("Agora, a população da quarta carta/cidade: %s\n", cidade4A);
        scanf("%d", &populacao4A);
        printf("Foi cadastrado como: %d habitantes \n", populacao4A);

    // a mesma divisão foi criada e foi adicionado "km²" para melhor entendimento. Reforcei que o número cadastrado deve ser decimal, devido a váriavel float
        printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade1A);
        scanf("%f", &area1A);
        printf("Foi cadastrado como: %f km² \n", area1A);
        printf("Agora, a area da segunda carta/cidade: %s\n", cidade2A);
        scanf("%f", &area2A);
        printf("Foi cadastrado como: %f km²\n", area2A);
        printf("Agora, a area da terceira carta/cidade: %s\n", cidade3A);
        scanf("%f", &area3A);
        printf("Foi cadastrado como: %f km² \n", area3A);
        printf("Agora, a area da quarta carta/cidade: %s\n", cidade4A);
        scanf("%f", &area4A);
        printf("Foi cadastrado como: %f km² \n", area4A);

    //Foi feita a mesma divisão, a adição de "bilhoes de reais" no cadastro e o aviso de número decimal devido a variavel float
        printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade1A);
        scanf("%f", &PIB1A);
        printf("Foi cadastrado como: %f bilhões de reais\n", PIB1A);
        printf("Agora, o PIB da segunda carta/cidade: %s\n", cidade2A);
        scanf("%f", &PIB2A);
        printf("Foi cadastrado como: %f bilhões de reais\n", PIB2A);
        printf("Agora, o PIB da terceira carta/cidade: %s\n", cidade3A);
        scanf("%f", &PIB3A);
        printf("Foi cadastrado como: %f bilhões de reais\n", PIB3A);
        printf("Agora, o PIB da quarta carta/cidade: %s\n", cidade4A);
        scanf("%f", &PIB4A);
        printf("Foi cadastrado como: %f bilhões de reais\n", PIB4A);

    // feita a mesma divisão na hora de cadastro desse atributo para melhor entendimento de código e de cadastro
        printf("Para completar as quatro cartas do primeiro estado, informe o numero de pontos turisticos da cidade %s\n", cidade1A);
        scanf("%d", &pt1A);
        printf("Foi cadastrado como: %d\n", pt1A);
        printf("Agora, o numero de pontos turisticos da segunda carta/cidade: %s\n", cidade2A);
        scanf("%d", &pt2A);
        printf("Foi cadastrado como: %d\n", pt2A);
        printf("Agora, o numero de pontos turisticos da terceira carta/cidade: %s\n", cidade3A);
        scanf("%d", &pt3A);
        printf("Foi cadastrado como: %d\n", pt3A);
        printf("Agora, o numero de pontos turisticos da quarta carta/cidade: %s\n", cidade4A);
        scanf("%d", &pt4A);
        printf("Foi cadastrado como: %d\n", pt4A);

    //Utilizei o printf para informar que chegou ao fim do cadastro das cartas relacionado ao estado declarado no inicio
    //Também foi utilizado o printf para resumir toda a informação cadastrada de cada cidade e utilizado o \n para dividir cada informação por linha
        printf("Chegamos ao fim de suas 4 primeiras cartas referente Estado %s. Confira:\n", estadoA);
        printf("Carta %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n Populacao: %d habitantes \n Area: %f km²\n PIB: %f bilhões de reais\n Pontos Turisticos: %d\n ", codcarta1, pais, estadoA, cidade1A, populacao1A, area1A, PIB1A, pt1A);
        printf("Carta %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n Populacao: %d habitantes\n Area: %f km²\n PIB: %f bilhões de reais\n Pontos Turisticos: %d\n ", codcarta2, pais, estadoA, cidade2A, populacao2A, area2A, PIB2A, pt2A);
        printf("Carta %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n Populacao: %d habitantes\n Area: %f km²\n PIB: %f bilhões de reais\n Pontos Turisticos: %d\n ", codcarta3, pais, estadoA, cidade3A, populacao3A, area3A, PIB3A, pt3A);
        printf("Carta %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n Populacao: %d habitantes\n Area: %f km²\n PIB: %f bilhões de reais\n Pontos Turisticos: %d\n ", codcarta4, pais, estadoA, cidade4A, populacao4A, area4A, PIB4A, pt4A);

    //Decidi fazer o cadastro de 4 cartas por vez visto que, um deck de 32 cartas ficaria muito longo cadastrando 1 carta por vez, e poderia ficar confuso caso o cadastro fosse com diversas informações para as 32 cartas de uma única vez
    // O cadastro por estado (4 por vez referente ao estado A) se tornou a melhor solução para não ficar muito cansativo e nem confuso
    // Decidi parar o código após a criação das 4 cartas iniciais, pois para cadastrar proximas cartas devo apenas copiar todo o codigo acima e colar abaixo, substituindo somente as variaveis (que também já foram declaradas)
        
    return 0;
}
