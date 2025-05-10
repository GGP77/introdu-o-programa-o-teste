int main() {
    printf("Cartas Super Trunfo! \n");

    int pontosturisticos, populacao;
    char cidade[50], estado[30], codigo[10];
    float area, pib, densidadepopulacional = (float) populacao / area, pibpercapta = (float) pib / populacao;




printf("Informe o Estado: \n");
scanf("%s", &estado);

printf("Informe o Código da Carta: \n");
scanf("%s", &codigo);

printf("Informe o Nome da Cidade: \n");
scanf("%s", &cidade);

printf("Informe a População da Cidade: \n");
scanf("%d", &populacao);

printf("Informe a Área da Cidade: \n");
scanf("%f", &area);

printf("Informe o PIB da Cidade: \n");
scanf("%f", &pib);

printf("Informe o Número de Pontos Turísticos da Cidade: \n");
scanf("%i", &pontosturisticos);

printf("Estado: %s \n", estado);
printf("Código da Carta: %s \n", codigo);
printf("Nome da Cidade: %s \n", cidade);
printf("População: %d \n", populacao);
printf("Área: %.3f \n", area);
printf("PIB: %.3f \n", pib);
printf("Pontos Turísticos: %i \n", pontosturisticos);
printf("Densidade Populacional: %.2f\n", densidadepopulacional);
printf("PIB per Capta: %.2f\n", pibpercapta);

    int Pontosturisticos, Populacao;
    char Cidade[50], Estado[30], Codigo[10];
    float Area, Pib, Densidadepopulacional = (float) Populacao / Area, Pibpercapta = (float) Pib / Populacao;

printf("Informe o Estado: \n");
scanf("%s", &Estado);

printf("Informe o Código da Carta: \n");
scanf("%s", &Codigo);

printf("Informe o Nome da Cidade: \n");
scanf("%s", &Cidade);

printf("Informe a População da Cidade: \n");
scanf("%d", &Populacao);

printf("Informe a Área da Cidade: \n");
scanf("%f", &Area);

printf("Informe o PIB da Cidade: \n");
scanf("%f", &Pib);

printf("Informe o Número de Pontos Turísticos da Cidade: \n");
scanf("%i", &Pontosturisticos);

printf("Estado: %s \n", Estado);
printf("Código da Carta: %s \n", Codigo);
printf("Nome da Cidade: %s \n", Cidade);
printf("População: %d \n", Populacao);
printf("Área: %.2f \n", Area);
printf("PIB: %.3f \n", Pib);
printf("Pontos Turísticos: %i \n", Pontosturisticos);
printf("Densidade Populacional: %.2f\n", Densidadepopulacional);
printf("PIB per Capta: %.2f\n", Pibpercapta);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome,

    return 0;
}