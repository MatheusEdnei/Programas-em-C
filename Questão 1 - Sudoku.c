#include<stdio.h>
#include<stdlib.h>

int main(){

    int sudoku[9][9], l = 0 , c = 0, k = 0 ,soma = 0, cont = 0, cont2 = 0, aux = 0,aux2 = 0; // l = linhas, c = colunas

    // Recebendo os valores do sudoku
    for(l = 0;l<9;l++){
        for(c = 0; c < 9; c++){
            printf("Digite o valor da linha %d e coluna %d: ",l+1,c+1);
            scanf("%d",&sudoku[l][c]);
        }
    }
    // Imprimindo a matriz
    for(l = 0;l<9;l++){
        for(c = 0; c < 9; c++){
            printf("%d",sudoku[l][c]);
        }
    }

    // Verificando as linhas
    for(k = 0; k < 9; k ++){
        for(l = 0; l < 9;l++){
            aux = sudoku[l][k];
            for(c = k ; c > 9 - k;c++){
                if(aux == sudoku[l][c]){
                    cont++;
                }
            }
        }
    }

    /*
    // Verificando as colunas
    for(c = 0; c < 9; c++){
        l = 0;
        aux2 = sudoku[l][c];
        for(l = 0; l < 9; l++){
            if(aux2 == sudoku[l][c]){
                cont++;
            }
        }
    }
    */
    // Saída
    printf("CONT = %d \n",cont);

    if(cont == 162){
        printf("Sudoku valido\n");
    }else{
        printf("Sudoku invalido\n");
    }

    system("pause");
    return 0;
}
