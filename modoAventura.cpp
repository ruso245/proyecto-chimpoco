#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Funciones.h"
#include "chimpocoYOponente.h"
#include "modocombate.h"
#include "modoAventura.h"

using namespace std;
void modoAventura()
{

    int enemigo[3];
    int chimpoco[3];
    nombre();
    eleccionChimpoco(chimpoco);
    for(int i =1 ; i <=5 ; i++){
        oponente(enemigo, i);
    combate(chimpoco, enemigo);
    if (chimpoco[PV]<=0){
        break;
    }



    }



}
