#include <stdio.h>

int fatorial (int n){ // Fun��o para calcular o fatorial
    if(n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

int arranjo(int n, int p){ // Fun��o para calcular o arranjo
    int fat_n,fat_p_n;
    fat_n = fatorial(n);
    fat_p_n = fatorial(n-p);
    return fat_n/fat_p_n;

}
int permutacao(int p){ // Fun��o para calcular a permuta��o
    int res;
    res = fatorial(p);
    return res;
}
int combina(int n, int p){ // Fun��o para calcular a combina��o
    int a,per;
    a = arranjo(n,p);
    per = permutacao(p);
    printf("%d ",a);
    return a/per;
}
int main(){
    int res;
    res = combina(26,4);
    printf("%d ",res);
    return 0;
}
