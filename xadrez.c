#include <stdio.h>

void movertorre(int casas){
    if (casas > 0){
        printf("Torre direita!\n");
        movertorre(casas - 1);
    }
}

void moverrainha (int casas){
    if (casas > 0){
        printf("Rainha Cima!\n");
        moverrainha(casas - 1);
    }
}

void moverbispo(int casas){
    for (int i = 1; i <= casas; i++){  
        printf("Bispo Cima!\n");
            for (int j = 1; j <= 1; j++){          
                printf("Bispo Direita!\n");
        }
    }
}

void movercavalo (int casas){
    for (int i = 1; i <= casas; i++){
        printf("Cavalo Cima!\n");
    }
    printf("Cavalo Direita\n");
}


int main(){

    printf("\nmovendo a torre:\n");
    movertorre(5);

    printf("\nmovendo a rainha:\n");
    moverrainha(8);

    printf("\nmovendo o bispo:\n");
    moverbispo(5);

    printf("\nmovendo o cavalo:\n");
    movercavalo(2);

    return 0;
}
}
