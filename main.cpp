#include <iostream>
#include "Funciones.h"

using namespace std;

int main()
{

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
            cout<<"modo versus:"<<endl;
            cout<<"ingrese nombre de usuario: ";
            char usuaryB;
            cin>>usuaryB;
            break;
        case 3:
            cout<<"God mode:"<<endl;
            cout<<"ingrese nombre de usuario: ";
            char usuaryC;
            cin>>usuaryC;
            break;
        case 4:
            cout<<"estadisticas:"<<endl;
            cout<<"ingrese nombre de usuario: ";
            char usuaryD;
            cin>>usuaryD;
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
