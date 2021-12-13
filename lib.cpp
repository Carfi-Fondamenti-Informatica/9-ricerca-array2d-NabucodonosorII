#include "lib.h"
#include <cstring>

bool posizione(char nome[1][20],char elenco[10][20],int &p){
    for(p=0;p<10;p++){
        if(strcmp(nome[0],elenco[p])==0)return true;
    }return false;
}
