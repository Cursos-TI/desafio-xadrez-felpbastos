#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        printf("Torre: Direita \n");
        moverTorre(casas - 1);
    }
}
void moverBispo(int casas){
    if (casas > 0){
        printf("Bispo: Cima / Direita \n");
        moverBispo(casas - 1);
    }
}
void moverRainha(int casas){
    if (casas > 0){
        printf("Rainha: Esquerda \n");
        moverRainha(casas - 1);
    }
}
void moverCavalo(int movimentos){  
        // 2 casas para cima
    for(int i = 0; i < 2; i++){
        printf("Cavalo: Cima\n");
}
        // 1 casa para direita
    for(int j = 0; j < 1; j++){
        printf("Cavalo: Direita\n");
}
}
    int main(){
        moverTorre(5);
        moverBispo(5);
        moverRainha(8);
        moverCavalo(3);

        return 0;
}