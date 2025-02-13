#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char pais[20];
    int codigoCidade;
    char codigoCidadeLetra;
    char nomeCidade[20];
    double populacaoCidade;
    double areaCidade;
    double pibCidade;
    int turisticoCidade;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o nome do País: "); //todos os printf demonstram saida no console para solicitar proximo comando
     scanf("%s", &pais); //todos os scanf atribuem comandos as solicitações anteriores dos printf
    printf("Digite o codigo(numeral de 1-4) da cidade: ");
     scanf("%d", &codigoCidade);
    printf("Digite o codigo(letra A-Z)da cidade: ");
     scanf(" %c", &codigoCidadeLetra);
    printf("Digite o nome da cidade: ");
     scanf("%s", &nomeCidade);
    printf("Digite a populacao da cidade: ");
     scanf("%lf", &populacaoCidade);
    printf("Digite a area da cidade: ");
     scanf("%lf", &areaCidade);
    printf("Digite o PIB da cidade: ");
     scanf("%lf", &pibCidade);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
     scanf("%d", &turisticoCidade);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n");
    printf("Pais: %s\n", pais);
    printf("Codigo da cidade: %d%c\n", codigoCidade, codigoCidadeLetra);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %.0lf\n", populacaoCidade);
    printf("Area: %.0lf(Km²)\n", areaCidade);
    printf("PIB: %.1lf(Bi R$)\n", pibCidade);
    printf("Pontos Turisticos: %d\n", turisticoCidade);

    /*dados para preenchimento de teste/debug
    Brasil
    1
    B
    Brasilia
    2.817.000 populacao
    5.760.784 km² area
    328.800.000.000 pib
    32 turistico 
    */

    return 0;
}
