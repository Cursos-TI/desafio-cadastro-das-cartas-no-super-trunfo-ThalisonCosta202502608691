#include <stdio.h>
/*OBSERVAÇÕES DO ALUNO: 
-Solicitações de etapas do curso(Novato,Aventureiro,Mestre) são muito confusas e aparentam desorganização nivel médio
-Necessário revisão para demonstrar ao aluno, corretamente, o que é necessário em cada etapa do código.
-Solicitações atuais não correspondem ao nível de conhecimento apresentado nas aulas e criam frustração no aluno que não possui
informações sobre vetores, matrizes, limpeza de buffer e chamada de biblioteca padrão em C.
-No momento alunos devem tentar fazer o código "ATÉ ONDE DER" o que ocasiona perda de tempo de estudo precioso 
pois o mesmo tentará enquanto for possível "teimar"(algo que varia de pessoa para pessoa)
-VSCode não é tão "beginner friendly"(interface suja demais) como CODEBLOCKS(IDE ideal para iniciantes)
 e apresenta diversos erros de instalação, dada versão atual e demonstração datada anteriormente(?) para aula do curso.
-Tempo perdido em 12/02/25 para instalação do VSCODE corretamente em WINDOWS: 2 horas e 42 minutos(com pesquisa online).
-Tempo perdido para configurar GITHUB(criar conta e assistir tutorial na aula): 30-45 minutos.
-GITHUB aparenta ser melhor e mais facil de configurar apesar da entrega de link não ter sido determinada por etapas ou conclusão
de tema.

INFORMAÇÕES DESEJADAS:
 -Número de países com os quais o programa SUPER_TRUNFO trabalhará
 -Onde parar o código para que tempo de estudo tenha delimitação e não haja disperdicio
 -Limpeza de buffer de gets teria ajudado bastante se ensinado no nivel NOVATO.
 -Vetores para utilizar de comando 'for(i = 0;i > scanf(variavel),i++)' para criar multiplas cartas com menos variaveis e linhas de codigo.
 -Matrizes para organização de subtipos com 'for' mencionado acima

*/


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa(quem é larissa?)

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
