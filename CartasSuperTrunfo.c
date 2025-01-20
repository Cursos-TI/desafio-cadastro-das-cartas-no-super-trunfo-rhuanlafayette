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
        cidade4H[20];
        int populacao1A, populacao2A, populacao3A, populacao4A, populacao1B, populacao2B, populacao3B, populacao4B,
        populacao1C, populacao2C, populacao3C, populacao4C, populacao1D, populacao2D, populacao3D, populacao4D,
        populacao1E, populacao2E, populacao3E, populacao4E, populacao1F, populacao2F, populacao3F, populacao4F,
        populacao1G, populacao2G, populacao3G, populacao4G, populacao1H, populacao2H, populacao3H, populacao4H;
        double area1A, area2A, area3A, area4A, area1B, area2B, area3B, area4B, area1C, area2C, area3C, area4C,
        area1D, area2D, area3D, area4D, area1E, area2E, area3E, area4E, area1F, area2F, area3F, area4F, area1G,
        area2G, area3G, area4G, area1H, area2H, area3H, area4H, PIB1A, PIB2A, PIB3A, PIB4A, PIB1B, PIB2B, PIB3B, PIB4B,
        PIB1C, PIB2C, PIB3C, PIB4C, PIB1D, PIB2D, PIB3D, PIB4D, PIB1E, PIB2E, PIB3E, PIB4E, PIB1F, PIB2F, PIB3F, PIB4F,
        PIB1G, PIB2G, PIB3G, PIB4G, PIB1H, PIB2H, PIB3H, PIB4H;
        int pt1A, pt2A, pt3A, pt4A, pt1B, pt2B, pt3B, pt4B, pt1C, pt2C, pt3C, pt4C, pt1D, pt2D, pt3D, pt4D,
        pt1E, pt2E, pt3E, pt4E, pt1F, pt2F, pt3F, pt4F, pt1G, pt2G, pt3G, pt4G, pt1H, pt2H, pt3H, pt4H;
    
        printf("Desafio Cartas Super Trunfo \n");

    
        printf("Para começar o jogo, digite o nome do seu Pais");
        scanf("%s \n", &pais);

        printf("Agora, digite o nome do Primeiro Estado: \n");
        scanf("%s \n", &estadoA);
       
        printf("Agora, escolha o nome de 4 cidades para o Primeiro Estado \n");
        scanf("%s, %s, %s, %s\n", &cidade1A, &cidade2A, &cidade3A, &cidade4A);

        printf("Agora informe a Populacao de cada cidade escolhida respectivamente \n");
        scanf( "%d, %d, %d, %d\n", &populacao1A, &populacao2A, &populacao3A, &populacao4A);
       
        printf("Dessa vez, escolha a area de cada cidade respectivamente \n");
        scanf("%f, %f, %f, %f \n", &area1A, &area2A, &area3A, &area4A);

        printf("Informe qual sera o PIB de cada cidade respectivamente");
        scanf("%f, %f, %f, %f \n", &PIB1A, &PIB2A, &PIB3A, &PIB4A);

        printf("Por fim, informe o numero de pontos turisticos em cada cidade respectivamente");
        scanf("%d, %d, %d, %d \n", &pt1A, &pt2A, &pt3A, &pt4A);

        printf("Chegamos ao fim de suas 4 primeiras cartas referente ao mesmo Estado. Confira:\n");
        printf("Carta A01: \n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n Populacao: %d\n Area: %f\n, PIB: %f\n Pontos Turisticos: %d\n ", pais, estadoA, cidade1A, populacao1A, area1A, PIB1A, pt1A);


        /*printf("Agora, digite o nome do Segundo Estado: \n");
        scanf("%s \n", &estadoB);
        printf("Agora, digite o nome do Terceiro Estado: \n");
        scanf("%s \n", &estadoC);
        printf("Agora, digite o nome do Quarto Estado: \n");
        scanf("%s \n", &estadoD);
        printf("Agora, digite o nome do Quinto Estado: \n");
        scanf("%s \n", &estadoE);
        printf("Agora, digite o nome do Sexto Estado: \n");
        scanf("%s \n", &estadoF);
        printf("Agora, digite o nome do Sétimo Estado: \n");
        scanf("%s \n", &estadoG);
        printf("Agora, digite o nome do Oitavo Estado: \n");
        scanf("%s \n", &estadoH);

        
        printf("Agora, escolha o nome de 4 cidades para o Segundo Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1B, &cidade2B, &cidade3B, &cidade4B);
        printf("Agora, escolha o nome de 4 cidades para o Terceiro Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1C, &cidade2C, &cidade3C, &cidade4C);
        printf("Agora, escolha o nome de 4 cidades para o Quarto Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1D, &cidade2D, &cidade3D, &cidade4D);
        printf("Agora, escolha o nome de 4 cidades para o Quinto Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1E, &cidade2E, &cidade3E, &cidade4E);
        printf("Agora, escolha o nome de 4 cidades para o Sexto Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1F, &cidade2F, &cidade3F, &cidade4F);
        printf("Agora, escolha o nome de 4 cidades para o Setimo Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1G, &cidade2G, &cidade3G, &cidade4G);
        printf("Agora, escolha o nome de 4 cidades para o Oitavo Estado \n");
        scanf("%s, %s, %s, %s \n" &cidade1H, &cidade2H, &cidade3H, &cidade4H);*/

        
    
    return 0;
}
