#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double a[3][3] = {
    {1.0, 2.0, 1.0},
    {0.0, 1.0, 2.0},
    {1.0, 2.0, 0.0}
};

double r[3][3], q[3][3];

int main() {
    int k, i, j;
    for (k=0; k<3; k++){
        r[k][k]=0;
        for (i=0; i<3; i++){
        // Fazendo o somátorio dos valores
            r[k][k] = r[k][k] + a[i][k] * a[i][k]; // rkk = sqr(a0k) + sqr(a1k) + sqr(a2k)
        }

        r[k][k] = sqrt(r[k][k]);  // Tirando a raiz para o Módulo do vetor
        printf("\n R %d %d : %d",k,k,r[k][k]);

    for (i=0; i<3; i++) {
        q[i][k] = a[i][k]/r[k][k]; // Calculando o Versor
        printf(" q %d %d : %d ",i,k,q[i][k]);
    }

    for(j=k+1; j<3; j++) {
        r[k][j]=0;
        for(i=0; i<3; i++){
            r[k][j] += q[i][k] * a[i][j];
        }
        printf("\n r %d %d : %d \n",k,j,r[k][j]);

        for(i=0; i<3; i++){
            a[i][j] = a[i][j] - r[k][j]*q[i][k];
        }

        for(i=0; i<3; i++){
            printf("a %d : %d ",j,a[i][j]);
        }
      }
    }

    system("PAUSE");
    return 0;
}
