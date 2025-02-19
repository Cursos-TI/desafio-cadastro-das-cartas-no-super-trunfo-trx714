#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado_1[20];
    char codigo_da_carta_1[20];
    char nome_da_cidade_1[20];
    int populacao_1;
    float Area_em_km2_1;
    float PIB_1;
    int pontos_turisticos_1;

    char estado_2[20];
    char codigo_da_carta_2[20];
    char nome_da_cidade_2[20];
    int populacao_2;
    float Area_em_km2_2;
    float PIB_2;
    int pontos_turisticos_2;


    printf("insira as informações\n");

    printf("carta 1\n");

    
//codigo de registro da carta 1
    printf("Digite o nome do estado: ");
    scanf("%s", estado_1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);

    printf("Digite o numero populacional: ");
    scanf("%d", &populacao_1);

    printf("Digite a area em km2: ");
    scanf("%f", &Area_em_km2_1);

    printf("Digite o PIB do local: ");
    scanf("%f", &PIB_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("carta 2\n");


    //codigo de registro da carta 2
        printf("Digite o nome do estado: ");
        scanf("%s", estado_2);
    
        printf("Digite o codigo da carta: ");
        scanf("%s", codigo_da_carta_2);
    
        printf("Digite o nome da cidade: ");
        scanf("%s", nome_da_cidade_2);
    
        printf("Digite o numero populacional: ");
        scanf("%d", &populacao_2);
    
        printf("Digite a area em km2: ");
        scanf("%f", &Area_em_km2_2);
    
        printf("Digite o PIB do local: ");
        scanf("%f", &PIB_2);
    
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos_2);

        //impressao da carta 1

        printf("carta 1\n");


        printf("estado: %s\n", estado_1);

        printf("codigo: %s\n", codigo_da_carta_1);


        printf("nome da cidade: %s\n", nome_da_cidade_1);


        printf("populacao: %d\n", populacao_1);


        printf("area: %f\n", Area_em_km2_1);


        printf("PIB: %f\n", PIB_1);

    

        printf("numeros de pontos turisticos: %d\n", pontos_turisticos_1);

         //impressao da carta 2

         printf("carta 2\n");


         printf("estado: %s\n", estado_2);
 
         printf("codigo: %s\n", codigo_da_carta_2);
 
 
         printf("nome da cidade: %s\n", nome_da_cidade_2);
 
 
         printf("populacao: %d\n", populacao_2);
 
 
         printf("area: %f\n", Area_em_km2_2);
 
 
         printf("PIB: %f\n", PIB_2);
 
     
 
         printf("numeros de pontos turisticos: %d\n", pontos_turisticos_2);
















    return 0;
}
