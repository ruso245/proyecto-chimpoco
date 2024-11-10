#include <iostream>
#include <cstdlib>
#include "Funciones.h"
#include "chimpocoYOponente.h"
#include "modocombate.h"
#include "modoAventura.h"
using namespace std;

void combate(int chimpoco[], int enemigo[])
{
    int PVE = 0;
    int ataqueMinimoE = 1;
    int ataqueMaximoE = 2;

    int PV = 0;
    int ataqueMinimo = 1;
    int ataqueMaximo = 2;

    bool ataque = 0;

     int chimpocoPVmax = chimpoco[PV];
    int enemigoPVEmax = enemigo[PVE];

    int eleccion;
     int elegirPocion;
        int cargasAtaque = 3;
        int cargasDefensa = 3;
        int cargasVida =3;
        int instanciaAtaque = 0;
        int instanciaDefensa = 0;
    while (chimpoco[PV]>0 && enemigo[PVE]>0){


    int ataqueEnemigo = enemigo[ataqueMinimoE] + (rand()% (enemigo[ataqueMaximoE] - enemigo[ataqueMinimoE])+1);
        if(ataque == true){
            ataque = false;
            system("cls");
            cout<<"TURNO ENEMIGO"<<endl;
        if(instanciaDefensa != 0){
            ataqueEnemigo = ataqueEnemigo * 0.8;
            instanciaDefensa--;
            cout<<"Usaste una carga del boost de defensa, te quedan: "<< instanciaDefensa<<" carga/s"<<endl;
        }
                cout<<"ataque enemigo: "<< ataqueEnemigo<<endl;
            chimpoco[PV] -= ataqueEnemigo;
            if (chimpoco[PV]<0){
                chimpoco[PV] = 0;

            }
            cout<<"Nuestra vida:"<< chimpoco[PV] <<"/"<<chimpocoPVmax<<endl;
            system("pause>nul");

        }
        else{
            ataque = true;
            system("cls");

            cout<<"TU TURNO"<<endl;
            cout<<"1 Ataque"<<endl;
            cout<<"2 Items"<<endl;
            cin>>eleccion;
    int ataqueNuestro = chimpoco[ataqueMinimo] + (rand()% (chimpoco[ataqueMaximo] - chimpoco[ataqueMinimo])+1);
            if(eleccion == 1){
        system("cls");
        cout<<"TURNO NUESTRO"<<endl;
            if (instanciaAtaque != 0){
                    system("cls");
                ataqueNuestro =  ataqueNuestro * 1.30;
                instanciaAtaque--;
                cout<<"Usaste una carga del Boost de ataque, te quedan: "<< instanciaAtaque<<" carga/s"<<endl;
            }
    cout<<"ataque chimpoco: "<< ataqueNuestro<<endl;


            enemigo[PVE] -= ataqueNuestro;
            if (enemigo[PVE]<0){
                enemigo[PVE] = 0;
            }
            }else{
                system("cls");
                cout<<"Elegi un items "<<endl;
                cout<<"1 Boost de ataque "<< cargasAtaque<<endl;
                cout<<"2 Boost de defensa "<< cargasDefensa<<endl;
                cout<<"3 Pocion de vida "<< cargasVida<<endl;

                cin>>elegirPocion;

                    if(elegirPocion == 1 && cargasAtaque != 0){
                        system("cls");
                        cout<<"elegiste el boost de ataque"<<endl;

                        instanciaAtaque = 2;
                        cargasAtaque--;
                        cout<<"te quedan "<<cargasAtaque<<" Boost de ataque"<<endl;
                        if(cargasAtaque == 0 ){
                            cout<<"Te quedaste sin Boost de ataque"<<endl;
                            }

                    } else if(elegirPocion == 2 && cargasDefensa !=0){
                        system("cls");
                        cout<<"elegiste el Boost de defensa"<<endl;
                        instanciaDefensa = 3;
                        cargasDefensa--;
                        cout<<"te quedan "<<cargasDefensa<<" Boost de defensa"<<endl;
                        if(cargasDefensa == 0 ){
                            cout<<"Te quedaste sin Boost de defensa"<<endl;
                            }


                    }else if(elegirPocion == 3 && cargasVida !=0){
                        system("cls");
                        if(chimpoco[PV] >= chimpocoPVmax){
                            cout<<"tenes la vida al maximo flaco que te vas a curar"<<endl;
                        }else{
                            cout<<"elegiste la pocion de vida"<<endl;
                            chimpoco[PV] += chimpocoPVmax *0.50;
                            cargasVida--;
                            cout<<"te quedan "<<cargasVida<<" pociones"<<endl;
                            if(chimpoco[PV] > chimpocoPVmax )
                                chimpoco[PV] = chimpocoPVmax;
                            if(cargasVida == 0 ){
                            cout<<"Te quedaste sin pociones de vida"<<endl;
                            system("pause>nul");
                            }
                        }
                    }




            }
              if(eleccion == 2){
                    system("cls");
                cout<<"No atacaste al enemigo por elegir un item"<<endl;
              }
            cout<<"Vida enemiga: "<<enemigo[PVE]<<"/"<< enemigoPVEmax<<endl;
            system("pause>nul");

        }
    }
    if(chimpoco[PV]<=0){
    cout<<"JAJAJAJA que bot perdiste XD"<<endl;
    system("pause>nul");
    }
    else {
    cout<<"GG ganaste flaco"<<endl;
    system("pause>nul");
    chimpoco[PV]= chimpocoPVmax;

    }
}
