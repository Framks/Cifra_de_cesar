#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd_caracter= 1;
    char *resultado= 0;
    int qtd_deslocamento;
    printf("digite a quantidade de deslocamento: ");
    scanf("%d",&qtd_deslocamento);
    qtd_deslocamento = qtd_deslocamento%27;
    char inicio = 'a', fim = 'z';
    printf("digite o texto para criptografa-lo com cifra de cesar e ao final de enter: ");
    getchar();
    while(1){
        char entrada;
        scanf("%c",&entrada);
        if(entrada >= 65 && entrada <= 90){
            inicio = 'A';
            fim =  'Z';
        }else if(entrada >= 97 && entrada <= 122){
            inicio = 'a';
            fim = 'z';
        }
        if(entrada == '\n'){
            break;
        }else if(!(entrada >= 65 && entrada <= 90) && !(entrada >= 97 && entrada <= 122)){
            resultado = (char*)realloc(resultado, qtd_caracter*sizeof(char));
            resultado[qtd_caracter-1] = entrada;
            qtd_caracter++;
        }
        else{
            char letra = ' ';
            letra = ((entrada + qtd_deslocamento)%(fim+1));
            if(!(letra >= entrada&&letra<=fim)){
                letra = letra+inicio;
            }
            resultado = (char*)realloc(resultado, qtd_caracter*sizeof(char));
            resultado[qtd_caracter-1] = letra;
            qtd_caracter++;
        }
    }
    for (int i = 0; i < (qtd_caracter-1); i++){
        printf("%c",resultado[i]);
    }
    printf("\n");
    return 0;
}