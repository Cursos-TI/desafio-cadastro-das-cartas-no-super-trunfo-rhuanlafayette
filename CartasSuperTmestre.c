#include <stdio.h>

int main () {

    float area, area2, pib, pib2;
    char pais[20], estado[20], estado2[20], cidade[20], cidade2 [20], codcarta[20], codcarta2[20];
    int populacao, populacao2, pt, pt2; 
    // Criação das variaveis apenas para a utilização em duas cartas
    // Utilização dos printf e scanf de modo que o jogo fique interativo, didatico e informativo, fácil de utilizar
    printf("Para começar o jogo, digite um nome para o Pais do jogo:\n"); 
        scanf("%s", &pais);

    printf("Agora, digite um nome para o Estado da primeira carta:\n");
        scanf("%s", &estado);
        printf("Estado cadastrado como: %s\n", estado);
    printf("Digite o codigo da sua primeira carta a ser criada. Sem espaços, por exemplo: A01, A02..\n");
        scanf("%s", &codcarta);
        printf("Código cadastrado como: %s\n", codcarta);
    printf("Agora, escolha apenas um nome para a cidade: (Não usar nomes duplos) \n");
        scanf("%s", &cidade);
        printf("Cidade cadastrada como: %s\n", cidade);
    printf("Agora, informe a Populacao da  cidade: %s\n", cidade);
        scanf("%d", &populacao);
        printf("População cadastrada: %d habitantes \n", populacao);
    printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade);
        scanf("%f", &area);
        printf("Área cadastrada como: %f km² \n", area);
    printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade);
        scanf("%f", &pib);
        printf("PIB cadastrado como: %f bilhões de reais\n", pib);
    printf("Informe o numero de pontos turisticos da cidade %s\n", cidade);
        scanf("%d", &pt);
        printf("Número de Pontos Turisticos cadastrado como: %d\n", pt);

        printf("Agora vamos criar a sua Segunda Carta! \n");

        printf("Digite um nome para o Estado da segunda carta:\n");
        scanf("%s", &estado2);
        printf("Estado cadastrado como: %s\n", estado2);
    printf("Digite o codigo da sua segunda carta. Sem espaços, por exemplo: A01, A02..\n");
        scanf("%s", &codcarta2);
        printf("Código cadastrado como: %s\n", codcarta2);
    printf("Agora, escolha apenas um nome para a cidade: (Não usar nomes duplos) \n");
        scanf("%s", &cidade2);
        printf("Cidade cadastrada como: %s\n", cidade2);
    printf("Agora, informe a Populacao da  cidade: %s\n", cidade2);
        scanf("%d", &populacao2);
        printf("População cadastrada: %d habitantes \n", populacao2);
    printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade2);
        scanf("%f", &area2);
        printf("Área cadastrada como: %f km² \n", area2);
    printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade2);
        scanf("%f", &pib2);
        printf("PIB cadastrado como: %f bilhões de reais\n", pib2);
    printf("Informe o numero de pontos turisticos da cidade %s\n", cidade2);
        scanf("%d", &pt2);
        printf("Número de Pontos Turisticos cadastrado como: %d\n", pt2);

    // criação das variaveis de densidade populacional e pib per capita apenas após o usuario informar os valores de pib, populacao e área.
    float denspop = (float) populacao / area;
    float pibpcap = (float) pib / populacao;
    float denspop2 = (float) populacao2 / area2;
    float pibpcap2 = (float) pib2 / area2;
    //criação do superpoder apenas após o sistema já ter todas as informações necessárias para realização da soma
    long double superpoder = (double) area + pib + populacao + pt - denspop + pibpcap;
    long double superpoder2 = (double) area2 + pib2 + populacao2 + pt2 - denspop2 + pibpcap2;
    //utilização de long double caso seja um numero muito grande adicionado pelo usuario e conversao em (double) visto que está sendo somando int e floats
    
    // Resumo das cartas com todos os valores adicionados:
    printf("Confira os valores da sua primeira carta: \n");
    printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d habitantes \n Area: %f km² \n PIB: %f  bilhões de reais\n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n Super Poder: %Lf\n", codcarta, pais, estado, cidade, populacao, area, pib, pt, denspop, pibpcap, superpoder);
    
    printf("Agora Confira os valores da sua segunda carta: \n");
    printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d habitantes \n Area: %f km² \n PIB: %f bilhões de reais \n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n Super Poder: %Lf\n", codcarta2, pais, estado2, cidade2, populacao2, area2, pib2, pt2, denspop2, pibpcap2, superpoder2);
    
    //comparação de cada campo de ambas as cartas utilizando o boolean
    printf("Agora iremos comparar as cartas para descobrir a vencedora!! \n");

    printf("Carta %s venceu a Carta %s no quesito População?", codcarta, codcarta2);
    printf("  %d\n", populacao > populacao2);
    printf("Carta %s venceu a Carta %s no quesito Área?", codcarta, codcarta2);
    printf("  %d\n", area > area2);
    printf("Carta %s venceu a Carta %s no quesito PIB?", codcarta, codcarta2);
    printf("  %d\n", pib > pib2);
    printf("Carta %s venceu a Carta %s no quesito Pontos Turísticos?", codcarta, codcarta2);
    printf("  %d\n", pt > pt2);
    printf("Carta %s venceu a Carta %s no quesito Densidade Populacional?", codcarta, codcarta2);
    printf("  %d\n", denspop < denspop2);
    printf("Carta %s venceu a Carta %s no quesito PIB Per Capita?", codcarta, codcarta2);
    printf("  %d\n", pibpcap > pibpcap2);
    printf("A Carta %s venceu a Carta %s com o seu super poder?", codcarta, codcarta2);
    printf("  %d\n", superpoder > superpoder2);
    // o super poder como última comparação, visto que ele define se a carta foi vencedora ou não 
}