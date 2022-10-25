#ifndef BARALHO_H
#define BARALHO_H
#include "Util.h"
#include "Carta.h"

typedef struct baralho BARALHO;

BARALHO* baralho_criar();
int baralho_empilhar(BARALHO *baralho, CARTA *carta);
int conta_baralho(BARALHO *baralho);
#endif
