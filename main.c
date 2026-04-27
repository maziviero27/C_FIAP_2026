#include <stdio.h>

int main(){
    int variavel1, variavel2, escolha, resultado;

    printf("digite o primeiro valor para ser calculado: ");
    scanf("%i", &variavel1);
    printf("digite o segundo valor para ser calculado: ");
    scanf("%i", &variavel2);

    printf("----SELECIONE A OPERACAO----\n 1- Multiplicacao\n 2- Divisao\n 3- Adicao\n 4- Subtracao\n");
    scanf("%i", &escolha);
    
    if(escolha == 1){
        resultado = variavel1 * variavel2;
        printf("O resutado e: %i", resultado);
    }
    else if(escolha == 2){
        resultado = variavel1 / variavel2;
        printf("O resutado e : %i", resultado);
    }
    else if(escolha == 3){
        resultado = variavel1 + variavel2;
        printf("O resutado e: %i", resultado);
    }
    else if(escolha == 4){
        resultado = variavel1 - variavel2;
        printf("O resutado e: %i", resultado);
    }
    else{
        printf("Escolha uma opcao de 1 a 4.");
    }

    int i, tabuada;
    printf("\n---------TABUADA---------\n");
    for(i = 0; i <= 10; i++)
    {
        tabuada = resultado * i;
        printf("%i X %i = %i\n", resultado, i, tabuada );
    }

    return 0;
}
