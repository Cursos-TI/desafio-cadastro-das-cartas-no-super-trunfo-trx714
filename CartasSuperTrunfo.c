#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // variaveis da carta 1
    char estado_1[20];
    char codigo_da_carta_1[20];
    char nome_da_cidade_1[20];
    int populacao_1;
    float Area_em_km2_1;
    float PIB_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float densidade_populacao_invertida_1;
    float PIB_per_capita_1;
    float super_poder_1;
    int resultadopopulacao, resultadoarea, resultadoPIB, resultadopontosturisticos, resultadodensidadepopulacional, resultado_PIB_per_capita, resultado_super_poder;

    

    // variaveis da carta 2
    char estado_2[20];
    char codigo_da_carta_2[20];
    char nome_da_cidade_2[20];
    int populacao_2;
    float Area_em_km2_2;
    float PIB_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float densidade_populacao_invertida_2;
    float PIB_per_capita_2;
    float super_poder_2;


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


        printf("area: %.2f\n", Area_em_km2_1);


        printf("PIB: %.2f\n", PIB_1);


        printf("numeros de pontos turisticos: %d\n", pontos_turisticos_1);
        // calculo da densidade populacional da carta 1

        densidade_populacional_1 = (float)populacao_1 / Area_em_km2_1;
        densidade_populacao_invertida_1 = 1.0 / densidade_populacional_1;
        // calculo do PIB per capita da carta 1

        PIB_per_capita_1 = PIB_1 / (float)populacao_1;

        // calculo do super poder da carta 1

        super_poder_1 = populacao_1 + Area_em_km2_1 + PIB_1 + PIB_per_capita_1 + densidade_populacao_invertida_1 + pontos_turisticos_1;

        printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional_1);

        printf("PIB per capita: %f\n", PIB_per_capita_1);

        printf("super poder: %f\n", super_poder_1);




         //impressao da carta 2

        printf("carta 2\n");


         printf("estado: %s\n", estado_2);
 
         printf("codigo: %s\n", codigo_da_carta_2);
 
 
         printf("nome da cidade: %s\n", nome_da_cidade_2);
 
 
         printf("populacao: %d\n", populacao_2);
 
 
         printf("area: %.2f\n", Area_em_km2_2);
 
 
         printf("PIB: %.2f\n", PIB_2);
     
 
         printf("numeros de pontos turisticos: %d\n", pontos_turisticos_2);
         // calculo da densidade populacional da carta 2

         densidade_populacional_2 = (float)populacao_2 / Area_em_km2_2;
         densidade_populacao_invertida_2 = 1.0 / densidade_populacional_2;

          // calculo do PIB per capita da carta 2

          PIB_per_capita_2 = PIB_2 / (float)populacao_2;
          // calculo do super poder da carta2

        
          super_poder_2 = populacao_2 + Area_em_km2_2 + PIB_2 + PIB_per_capita_2 + densidade_populacao_invertida_2 + pontos_turisticos_2;



          printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional_2);

        printf("PIB per capita: %f\n", PIB_per_capita_2);

        printf("super poder: %f\n", super_poder_2);

        // comparação das cartas

        resultadopopulacao = populacao_1 > populacao_2;
        resultadoarea = Area_em_km2_1 > Area_em_km2_2;
        resultadoPIB = PIB_1 > PIB_2;
        resultadopontosturisticos = pontos_turisticos_1 > pontos_turisticos_2;
        resultadodensidadepopulacional = densidade_populacional_1 < densidade_populacional_2;
        resultado_PIB_per_capita = PIB_per_capita_1 > PIB_per_capita_2;
        resultado_super_poder = super_poder_1 > super_poder_2;
        

        // impressão da carta vencedora

        printf("Comparação de Cartas:\n");

        printf("População: Carta 1 venceu (%d)\n", resultadopopulacao);
        printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
        printf("PIB: Carta 1 venceu (%d)\n", resultadoPIB);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadopontosturisticos);
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadodensidadepopulacional);
        printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado_PIB_per_capita);
        printf("Super Poder: Carta 1 venceu (%d)\n", resultado_super_poder);



    return 0;
}
