#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char elenco[10][20];char nome[1][20];
    int n; int p;
    for (n=0;n<10;n++){
        cin >> elenco[n];
    }
    cin >> nome[0];
    if(posizione(nome, elenco, p)){
        cout << p<<endl;
    }else{
        cout <<"non presente"<<endl;
    }
    return 0;
}
