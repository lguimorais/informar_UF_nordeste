#include <stdio.h>
#include <stdlib.h>

int uf, operador;
int main(){
    do{
        printf("1-PE\n");
        printf("2-PI\n");
        printf("3-BA\n");

        printf("informe a UF do seu estado de origem \n");
        scanf("%d", &uf);
        if (uf==1){
            printf("Voce e Pernambucano \n");
        }
        else if (uf==2){
            printf("Voce e Piauiense \n");
        }else if (uf==3){
            printf("voce e baiano\n");
        }
    printf("deseja pesquisar outra UF 1-sim ou 0-nao\n");
    scanf("%d ", &operador);
    }while (operador!=0);
}
