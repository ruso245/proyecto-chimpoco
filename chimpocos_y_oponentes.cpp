#include <iostream>
#include <cstdlib>
#include "Funciones.h"
#include "chimpocoYOponente.h"
#include "modocombate.h"
#include "modoAventura.h"
using namespace std;




    void oponente(int enemigo [], int i)
{
int const PVE = 0;
    int const ataqueMinimoE = 1;
    int const ataqueMaximoE = 2;

    switch(i)
    {
    case 1:
        enemigo [PVE] = 150;
        enemigo [ataqueMinimoE] = 5;
        enemigo [ataqueMaximoE] = 15;
        break;
    case 2:
        enemigo [PVE] = 300;
        enemigo [ataqueMinimoE] = 25;
        enemigo [ataqueMaximoE] = 45;
        break;
    case 3:
        enemigo [PVE] = 450;
        enemigo [ataqueMinimoE] = 40;
        enemigo [ataqueMaximoE] = 55;
        break;
    case 4:
        enemigo [PVE] = 700;
        enemigo [ataqueMinimoE] = 55;
        enemigo [ataqueMaximoE] = 75;
        break;
    case 5:
        enemigo [PVE] = 1500;
        enemigo [ataqueMinimoE] = 25;
        enemigo [ataqueMaximoE] = 150;
        break;
    }


}
void eleccionChimpoco(int chimpoco[])
{
    int const PV = 0;
    int const ataqueMinimo = 1;
    int const ataqueMaximo = 2;


    system("cls");


    cout<<"Pibe elegi un chimpoco"<<endl;

    int eleccion;
    cin>>eleccion;



    switch(eleccion)
    {
    case 1:
        chimpoco[PV] = 1200;
        chimpoco[ataqueMinimo] = 40;
        chimpoco[ataqueMaximo] = 50;

        break;
    case 2:
        chimpoco[PV] = 500;
        chimpoco[ataqueMinimo] = 55;
        chimpoco[ataqueMaximo] = 65;

        break;
    case 3:
        chimpoco[PV] = 700;
        chimpoco[ataqueMinimo] = 35;
        chimpoco[ataqueMaximo] = 55;

        break;
    case 4:
        chimpoco[PV] = 600;
        chimpoco[ataqueMinimo] = 15;
        chimpoco[ataqueMaximo] = 85;

        break;
    default:
        cout<<"eleccion no valida"<<endl;
        system("pause");
        break;
    }


}
