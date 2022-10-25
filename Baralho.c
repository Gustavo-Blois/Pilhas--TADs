#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Baralho.h"
#include "Carta.h"

struct baralho{
    CARTA **carta;
    int topo;
};

BARALHO* baralho_criar()
{
    BARALHO *baralho = (BARALHO*)malloc(sizeof(BARALHO));
    if(baralho != NULL)
    {
        baralho->topo = 0;
        baralho->carta = (CARTA**)malloc(sizeof(CARTA*));
    }
    return baralho;
}

int baralho_empilhar(BARALHO *baralho, CARTA *carta){

if(baralho != NULL){
    baralho->carta = realloc(baralho->carta,sizeof(CARTA*)*(baralho->topo));
    baralho->carta[baralho->topo] = (CARTA*)malloc(sizeof(baralho->carta));
    baralho->carta[baralho->topo] = carta;
    baralho->topo++;
    return TRUE;
}
    return 2;
}

int conta_baralho(BARALHO *baralho){
    int contagem = 0;
    for(int i = 0; i < baralho->topo;i++){
        if(pega_simbolo(baralho->carta[i]) == 'V'){
            contagem += 10;
        }
         if(pega_simbolo(baralho->carta[i]) == 'D'){
            contagem += 10;
        }
         if(pega_simbolo(baralho->carta[i]) == 'R'){
            contagem += 10;
        }
         if(pega_simbolo(baralho->carta[i]) == "10"){
            contagem += 10;
        }
         if(pega_simbolo(baralho->carta[i]) == '9'){
            contagem += 9;
        }
         if(pega_simbolo(baralho->carta[i]) == '8'){
            contagem += 8;
        }
         if(pega_simbolo(baralho->carta[i]) == '7'){
            contagem += 7;
        }
         if(pega_simbolo(baralho->carta[i]) == '6'){
            contagem += 6;
        }
         if(pega_simbolo(baralho->carta[i]) == '5'){
            contagem += 5;
        }
         if(pega_simbolo(baralho->carta[i]) == '4'){
            contagem += 4;
        }
         if(pega_simbolo(baralho->carta[i]) == '3'){
            contagem += 3;
        }
         if(pega_simbolo(baralho->carta[i]) == '2'){
            contagem += 2;
        }
         if(pega_simbolo(baralho->carta[i]) == '1'){
            contagem += 1;
        }
    }
  return contagem;
}
