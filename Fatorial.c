#include <stdio.h>

int fatorial(int n){
    if (n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }

}
int main(){
    int n,res;
    printf("Digite um numero para ver o seu fatorial: ");
    scanf("%d",&n);
    res = fatorial(n);
    printf("O fatorial do numero eh: %d ",res);
    return 0;
}
