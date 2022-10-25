#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Carta.h"

struct carta_st
{
    int chave;
    char *naipe;
    char *simbolo;
};

char *readLine() {
    char *string = NULL;
    char currentInput;
    int index = 0;
    do {
        currentInput = (char)getchar();
        string = (char *) realloc(string, sizeof(char) * (index + 1));
        string[index] = currentInput;
        index++;
        if(currentInput == '\r')
        {
            currentInput = (char)getchar();
        }
    } while((currentInput != '\n') && (currentInput != EOF));
    string[index - 1] = '\0';
    return string;
}

char *pega_simbolo(CARTA *carta){
    return carta->simbolo;
}
