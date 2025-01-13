#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Inseri o título do desafio - Nível novato:

    printf("Desafio de Cartas Super Trunfo - Países \n");

    // Defini o tipo e o nome das variáveis:
    char estado[50];
    char codigo[20];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Defini o que sairá em cada printf e scanf:

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", &estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", &nome);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    // Defini o retorno ao usuário após o cadastro da carta feita pelo mesmo. 

    printf("Você cadastrou esta carta: \n");
    
    printf("Código da carta criada: %s \n", codigo);
    printf("Estado: %s - Cidade: %s \n", estado, nome);
    printf("População: %f \n", populacao);
    printf("Tamanho da área: %f km² \n", area);
    printf("PIB: %f \n", pib);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos);

        
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
