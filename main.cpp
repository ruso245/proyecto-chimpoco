#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Funciones.h"

using namespace std;

int main()
{
srand(time(0));
    int opcion;
    while(true)
    {
        system("cls");
        menu();
        cin>>opcion;
        switch(opcion){
        case 1:

            modoAventura();

            break;
        case 2:
            modoVersus();

            break;
        case 3:
           modoDios();
            break;
        case 4:
           nombre();
           break;
        case 5:
            manual();
            break;
        case 0:
            return 0;
            break;
        default:
            cout<<"ingrese un valor valido:"<<endl;
            system("pause");
            break;
        }
    } return 0;
}
