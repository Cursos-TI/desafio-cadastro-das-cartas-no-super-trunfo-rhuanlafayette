#include <stdio.h>

int main() {
// primeiro separei os tipos de variaveis de acordo
float area, pib;
char pais[20], estado[20], cidade[20], codcarta[20];
int populacao, pt; 
//Diferente do desafio iniciante, escolhi solicitar todos os dados em uma única linha de código. Tornando assim mais rápido o processo

printf("Por favor, informe o Código da Carta, o nome do Pais, do Estado, da Cidade, a população, a área, o PIB e o número de pontos turisticos de sua cidade: (Lembre-se que cada dado é separado por espaço ) \n");
scanf("%s%s%s%s%d%f%f%d", &codcarta, &pais, &estado, &cidade, &populacao, &area, &pib, &pt);

//os tipos das variaveis da Densidade Pop. e do PIB per capita foram somente definidas após o user declarar o valor da populacao, area e pib, para que o código funcionasse de forma mais limpa e o calculo fosse feito corretamente
float denspop = (float) populacao / area;
float pibpcap = (float) pib / populacao;

//Após feito o calculo e ter as variaveis da Densidade e do PIB per capita declaradas, utilizei o printf para mostrar o resultado final da carta
printf("Confira sua carta com as novas informações de Densidade Populacional e PIB per capita: \n");
printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d\n Area: %f\n PIB: %f\n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n ", codcarta, pais, estado, cidade, populacao, area, pib, pt, denspop, pibpcap);


}