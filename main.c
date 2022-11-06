#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cript (char word [30]);

int main() {
    int opcao = 1; //Variavel para dar opcao ao menu, definida com (1) para não carregar lixo.
    char word[30]; //Variavel global parar guardar os caracteres ou frase que será submetida, no maximo 30 caracteres.


    do { //laço de repetição do while, usado como menu de escolha com opções.
            printf(" 1 - Criptografar\n");
            printf(" 2 - Descriptografar\n");
            printf("0 - Sair\n\n>>>");
            scanf("%d", &opcao);

            switch(opcao) {

                case 1: printf("Digite uma palavra ou frase : ");
                            scanf("%s", &word);
                            cript(word); //Caso na escolha seja digito 1, o usuário deverá digitar uma palavra ou frase, e será direcionado para a função de criptografia
                            break;//Break pra parar o laço de repetição

                case 2: printf("Digite a criptografia : ");
                             scanf ("%s", &word);
                             cript(word); //Caso na escolha seja digitado 2, o usuário deverá digitar a criptografia que ele deseja descriptografar, também é direcionado para a função de criptografia
                             break;//Break pra parar o laço de repetição




            }



    } while(opcao !=0); //caso a opção seja diferente de 0, ele continuará rodando o programa, caso seja igual a 0 (zero), o programa ira finalizar.
    return 0;
}

void cript(char word[30]) { //função da criptografia

    char chave1[10], chave2[10]; /* Variaveis para guardar as chaves que serão digitadas, ambas as chaves devem ter
                                                      a mesma quantidade de caracteres definidos*/

    int i, j; /*variaveis de controle para rodar o laço de repetição*/

    printf("Chave1 : ");
    scanf("%s", &chave1); //Chave1 e Chave2, para guardar os caracteres e frase para serem trocadas, elas servem ambas para criptografar e descriptografar

    printf("Chave2 :");
    scanf("%s", &chave2);

    for(i = 0; i < strlen(word); i++) {      /* Laço de repetição em matriz para comparar o texto com as chaves, para assim conseguir fazer a troca do caractere.
                                                                     Foi utilizado a função Strlen da biblioteca (String.h), que retorna a quantidade de caracteres
                                                                     que esta guardada na variavel.*/
    for(j = 0; j < strlen(chave1); j++){

            if(word[i]  ==  chave1[j]) {  /*Condicional, se a letra nessa posição atual for igual a alguma posição da (Chave1[j]), ela é trocada pela (chave2[j]),
                                                            com o intuito de pegar a mesma posição dos dois laços, podendo assim fazer a troca do caractere*/

                word[i] = chave2[j];
                break;  //Break para parar o laço, caso não haja, ficara o loop

            }else if(word[i] == chave2[j]) { /* Outra condição, se  (word[i]) for igual chave2[j] forem satisfeiras, a posição atual, receberia (chave1[j]
                                                                     na posição [j], para efetuar a trocar do caracter na mesma posição*/
                word[i] = chave1[j];
                break; //Break para parar o laço, caso não haja, ficara o loop
            }
        }

    }
    printf("==> %s\n\n", word); //Printando na tela o resultado.
}
