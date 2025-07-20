#include <stdio.h>

int main()
{
    int inicio = 0;
    char Estado[8];
    char Nome_Cidade[50];
    int Populacao;
    float area;
    float pib;
    int Pturisticos;

    while (inicio == 0)
    {
        printf("Digite Sigla do Estado: \n");
        scanf("%s", Estado);

        printf("Digite nome da cidade: \n");
        scanf("%s", Nome_Cidade);

        printf("Digite a População: \n");
        scanf("%d", &Populacao);

        printf("Digite Área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        printf("Digite Quantidade de Pontos Turísticos: \n");
        scanf("%d", &Pturisticos);

        printf("\nResumo:\n");
        printf("Estado: %s\n", Estado);
        printf("Cidade: %s\n", Nome_Cidade);
        printf("População: %d\n", Populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", Pturisticos);

        printf("\nDigite 0 para cadastrar novo estado ou 1 para encerrar: ");
        scanf("%d", &inicio);
    }

    printf("|Cidade Cadastrada| \n"
            "Estado:%s \n"
            "Cidade: %s \n"
            "População: %d \n"
            "Área: %f km² \n"
            "PIB: %f bilhões de reais \n"
            "Pontos Turísticos: %d",Estado,Nome_Cidade,Populacao,area,pib,Pturisticos );

    return 0;
}