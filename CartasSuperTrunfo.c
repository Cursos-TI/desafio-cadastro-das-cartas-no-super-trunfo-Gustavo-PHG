#include <stdio.h>
#include <string.h>

    int PT, PT2, populacao, populacao2;
    float area, area2, PIB, PIB2, densidade, densidade2, PIBC, PIBC2;
    char estado, estado2, codigo[4], codigo2[4], nomecity[100], nomecity2[100];

    void entradaCarta1(){

        printf("Faça sua carta de super Trunfo:\n");

        printf("Carta 1:\n");
    
        printf("Insira uma letra de A a H para seu Estado:\n");
        scanf(" %c", &estado);
        fflush(stdin);
    
        printf("Insira a letra e um número de 01 a 04\n");
        scanf("%s", &codigo);
        fflush(stdin);
    
        printf("Insira o nome da cidade:\n");
        getchar();
        fgets(nomecity, 100, stdin);
        nomecity[strcspn(nomecity, "\n")] = 0;
        //o programa não aceita letras com caracteres especiais
    
        printf("Insira a população da cidade:\n");
        scanf("%d", &populacao);    
    
        printf("Insira a área da cidade:\n");
        scanf("%f", &area);
    
        printf("Insira o PIB da cidade\n");
        scanf("%f", &PIB);
    
        printf("Insira o número de pontos turísticos na cidade:\n");
        scanf("%d", &PT);

    }

    void entradaCarta2(){

        getchar();
        printf("\nCarta 2:\n");

        printf("Insira uma letra de A a H para seu Estado:\n");
        scanf(" %c", &estado2);
    
        printf("Insira a letra e um número de 01 a 04:\n");
        scanf("%s", &codigo2);
    
        printf("Insira o nome de uma cidade:\n");
        getchar();
        fgets(nomecity2, 100, stdin);
        nomecity2[strcspn(nomecity2, "\n")] = 0;
    
        printf("Insira a população da cidade:\n");
        scanf("%d", &populacao2);
    
        printf("Insira a área da cidade:\n");
        scanf("%f", &area2);
    
        printf("Insira o PIB da cidade:\n");
        scanf("%f", &PIB2);
    
        printf("Insira o número de pontos turísticos na cidade:\n");
        scanf("%d", &PT2);

    }

    void calculosCarta(){

        densidade = populacao / area;
        densidade2 = populacao2 / area2;
        PIBC = (PIB * 1000000000) / populacao;
        PIBC2 = (PIB2 * 1000000000)/ populacao2;
    }

    void saidaCarta1(){

        printf("\nCartas feitas, aqui estão elas:\n");
    
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da cidade: %s\n", nomecity);  
        printf("Populacao: %d\n", populacao);
        printf("Área da cidade: %.2fKm²\n", area);
        printf("PIB: %.2f bilhões de reais\n", PIB);
        printf("Número de pontos turísticos: %d\n", PT);  
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per capita: %.2f reais\n", PIBC);     

    }

    void saidaCarta2(){

        printf("\nCarta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nomecity2);
        printf("População: %d\n", populacao2);
        printf("àrea da cidade: %.2fKm²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", PIB2);
        printf("Número de pontos turísticos: %d\n", PT2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", PIBC2); 

    }

    int main(){
        entradaCarta1();
        entradaCarta2();
        calculosCarta();
        saidaCarta1();
        saidaCarta2();
        return 0;
    }
