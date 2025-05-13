int main() {
    printf("Cartas Super Trunfo! \n");

    int pontosturisticos, populacao;
    char cidade[50], estado[30], codigo[10];
    float area, pib, superpoder;
    float densidadepopulacional, pibpercapta;
    

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
scanf("%d", &pontosturisticos);

densidadepopulacional = (float) populacao / area;
pibpercapta = (float) pib / populacao;
superpoder = populacao + area + pib + pontosturisticos + pibpercapta + (1 / densidadepopulacional);

printf("Estado: %s\n", estado);
printf("Código da Carta: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.3f km²\n", area);
printf("PIB: %.3f bilhões de reais\n", pib);
printf("Pontos Turísticos: %d\n", pontosturisticos);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
printf("PIB per Capta: %.2f reais\n", pibpercapta);
printf("Super Poder: %f\n", superpoder);

    int Pontosturisticos, Populacao;
    char Cidade[50], Estado[30], Codigo[10];
    float Area, Pib, Densidadepopulacional, Pibpercapta, SuperPoder;
    

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
scanf("%d", &Pontosturisticos);

Densidadepopulacional = (float) Populacao / Area; 
Pibpercapta = (float) Pib / Populacao;
SuperPoder = Populacao + Area + Pib + Pontosturisticos + Pibpercapta + (1 / Densidadepopulacional);


printf("Estado: %s\n", Estado);
printf("Código da Carta: %s\n", Codigo);
printf("Nome da Cidade: %s\n", Cidade);
printf("População: %d\n", Populacao);
printf("Área: %.2f km²\n", Area);
printf("PIB: %.3f bilhões de reais\n", Pib);
printf("Pontos Turísticos: %d\n", Pontosturisticos);
printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional);
printf("PIB per Capta: %.2f reais\n", Pibpercapta);
printf("Super Poder: %f\n", SuperPoder);

int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontoTuristico, resultadoDensidade, resultadoPibPercapta, 
                                                                                                    resultadoSuper;
resultadoPopulacao = Populacao > populacao;
resultadoArea = Area > area;
resultadoPib = Pib > pib;
resultadoPontoTuristico = Pontosturisticos > pontosturisticos;
resultadoDensidade = Densidadepopulacional < densidadepopulacional;
resultadoPibPercapta = Pibpercapta > pibpercapta;
resultadoSuper = SuperPoder > superpoder;

printf("Comparação das Cartas: \n");

printf("População: %d\n", resultadoPopulacao);
printf("Área: %d\n", resultadoArea);
printf("PIB: %d\n", resultadoPib);
pintf("Pontos Turísticos: %d\n", resultadoPontoTuristico);
printf("Densidade Populacional: %d\n", resultadoDensidade);
print("PIB per Capta: %d\n", resultadoPibPercapta);
printf("Super Poder: %d\n", resultadoSuper);




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome,

    return 0;
}