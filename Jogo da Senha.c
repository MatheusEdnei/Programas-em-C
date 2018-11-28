#include <stdio.h>
#include<stdlib.h>
 main(){
    int vet1[4],vet2[4],a,b,t=0,cc=0,ce=0,c = 0;
    printf ("Jogador 1, escreva sua senha!\n");
    for(a=0;a<4;a++){
        scanf("%d",&vet1[a]);
    }
    system("cls");
    printf ("Jogador 2, agora é sua vez!\n");

    for(b=0;b<4;b++){
        scanf("%d",&vet2[b]);
    }
    while (c != 10){

        printf("Tente outra vez!");
        for(b=0;b<4;b++){
            scanf("%d",&vet2[b]);
        }
        for(a=0;a<4;a++){
            if(vet1[a]== vet2[a]){
                cc++;
            }
        }
        for(a = 0;a<4;a++){
            for(b = 0;b<4;b++){
                if(vet1[a] == vet2[b]){
                    if(a == b){
                    t++;
                    }
            }
                if (vet1[a] == vet2[b]){
                    if(a != b){
                            if(t==0){
                                ce++;
                                t = 0;
                            }
                    }
                }
            }
        }
        printf("%d digitos corretos no lugar correto\n",cc);
        printf("%d digitos corretos no lugar errado\n",ce);
        c++;
    }


 }
