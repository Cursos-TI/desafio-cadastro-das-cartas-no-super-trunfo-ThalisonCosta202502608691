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
    scanf("%s ", &pais); //todos os scanf atribuem comandos as solicitações anteriores dos printf
    printf("\nDigite o codigo(numeral de 1-4) da cidade: ");
    scanf("%d ", &codigoCidade);
    printf("\nDigite o codigo(letra A-Z)da cidade: ");
    scanf("%c ", &codigoCidadeLetra);
    printf("\nDigite o nome da cidade: ");
    scanf("%s ", &nomeCidade);
    printf("\nDigite a populacao da cidade: ");
    scanf("%lf ", &populacaoCidade);
    printf("\nDigite a area da cidade: ");
    scanf("%lf ", &areaCidade);
    printf("\nDigite o PIB da cidade: ");
    scanf("%lf ", &pibCidade);
    printf("\nDigite a quantidade de pontos turisticos da cidade: ");
    scanf("%d ", &turisticoCidade);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Pais: %s", pais);
    printf("Codigo da cidade: %d%c", codigoCidade, codigoCidadeLetra);
    printf("Cidade: %s", nomeCidade);
    printf("Populacao: %lf", populacaoCidade);
    printf("Area(Km²): %lf", areaCidade);
    printf("PIB: %lf", pibCidade);
    printf("Pontos Turisticos: %d", turisticoCidade);

    return 0;
}
