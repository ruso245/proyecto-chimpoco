#include <iostream>
#include "Funciones.h"
using namespace std;
/*manual*/
void manual()
{
     system("cls");
          cout<<"--- MANUAL ---:"<<endl;
          cout<<"Seleccione 1 para especificaciones del juego"<<endl;
          cout<<"Seleccione 2 para ver modos de juegos"<<endl;
          cout<<"Seleccione 3 para ver detalles del juego"<<endl;
          cout<<"Seleccione 4 para creditos de los desarrolladores"<<endl;
          int manual;
          cin>> manual;

          switch (manual)
        {
        case 1:

            cout<<"Chimpoco Fight es un juego de pelea por turnos para uno/dos jugadores en el que"<<endl;
            cout<<"juegan con estrategia y el azar."<<endl;
            cout<<"Lo primero que tenes que hacer como entrenador Chimpocomon es elegir tu Chimpo compa�ero"<<endl;
            cout<<"para embarcarte en la lucha por la supremacia."<<endl;
            cout<<"Tu y tu chimpoco deberan enfrentarse a 5 enemigos uno mas poderoso que el otro."<<endl;
            cout<<"Puedes elegir entre 4 Chimpocos para que te acompa�en."<<endl;

            cout<<"El juego cuenta con Chimpocos de diferentes elementos:"<<endl;
            cout<<"1) Rockito ( elemento Tierra)"<<endl;
            cout<<"2) Picante ( elemento Fuego)"<<endl;
            cout<<"3) Freddy  ( elemento Hielo)"<<endl;
            cout<<"4) Rayin   ( elemento Rayo)"<<endl;
            cout<<"Tambien hay 5 oponentes a los que se enfrentaran nuestros Chimpocos:"<<endl;
            cout<<"1) Stitchard"<<endl;
            cout<<"2) FurbyZhor"<<endl;
            cout<<"3) helloCathy"<<endl;
            cout<<"4) BabyYorda"<<endl;
            cout<<"5) TioMickey"<<endl;

 break;
       case 2:

    cout<<"Nuestro juego cuenta con 3 modos:"<<endl;
    cout<<"Modo Aventura: Este modo de juego permite al jugador iniciar su historia como entrenador Chimpocomon y pelar contra los cinco oponentes."<<endl;
    cout<<"Primero deberas ingresar tu nombre de jugador y asi luego poder elegir tu compa�ero chimpoco. una vez que lo eligas comenzara la batalla contra los oponentes."<<endl;
    cout<<"El ChimpocoTournament se trata de 5 combates con una dificultad creciente y si logran vencer a los 5 oponentes se consagra como maesro Chimpocomon."<<endl;
    cout<<"Cuando un combate es exitoso la vida y los items de los chimpocos se reestablecen al 100%."<<endl;
    cout<<"el Chimpoco cuenta con una  accion por turno, puede ser un ataque o usar un item, los cuales son:"<<endl;
    cout<<"1) Boost de ataque por 2 turnos (+30% ataque) - 1 carga"<<endl;
    cout<<"2) Boost de defensa por 2 turnos (+20% defensa) - 1 carga"<<endl;
    cout<<"3)Pocion de vida ( cura 50% de la vida total) - 2 cargas"<<endl;

    cout<<"Modo Versus: Este modo permite a dos jugadores enfrentarse entre si en un combate."<<endl;
    cout<<"Cuando seleccionas esta opcion los jugaores deberan su nombre y luego ambos jugadores tiraran un dado y el que saque el numero mas alto elegira primero al chimpocco."<<endl;
    cout<<"-Si hay un empate se vuelve a tirar."<<endl;
    cout<<"-Los jugadores no podran elegir el mismo chimpoco."<<endl;

    cout<<"God Mode ( Modo Dios): Este modo esta hecho como un modo de prueba parecido al de aventura, ya que nuestros chimpocos contaran con la vida al 9999%."<<endl;
    cout<<"Los jugadores podran salir de la pelea y volver al menu principal en cualquier turno correspondiente."<<endl;

    cout<<"-Luego de los tres modos de juegos se encuentran las Estadisticas:"<<endl;
    cout<<"Estas deberan almacenar:"<<endl;
    cout<<"-Los turnos que aguanto/sobrevivio el chimpoco."<<endl;
    cout<<"-Las pociones utilizadas por los jugadores."<<endl;
    cout<<"-El da�o causado y el da�o recibido."<<endl;

        break;

       case 3:
    cout<<"--> Funcion de los combates:"<<endl;
    cout<<"-Tanto en el Modo Aventura como en el God Mode los participantes luego de ingresar su nombre deberan elegir un chimpoco con el que pelear."<<endl;
    cout<<"Los combates se mediran por turnos, en tu turno podras causarle da�o al enemigo, tambien podras usar items especiales/pociones que le daran al chimpoco mejoras por cierta cantidad de turnos."<<endl;
    cout<<"-En el Modo Versus 2 jugadores podran tirar un dado asi determinar quien elige al chimpoco primero y enfrentarse entre si."<<endl;

    cout<<"--> Pociones (items especiales):"<<endl;
    cout<<"-Pocion de ataque: Esta pocion nos dara un 30% de aumento de da�o de ataque durante dos turnos, solo se podra utilizar una vez."<<endl;
    cout<<"-Pocion de defensa: Esta pocion nos dara un 205 de aumento en nuestra defensa, tambien durara dos turnos y podremos utilizarla una vez."<<endl;
    cout<<"-Pocion de vida: Esta pocion la podremos usar dos veces y nos aumentara/recargara la vida total de nuestro chimpoco un 50% en el combate."<<endl;

        break;

        case 4:

    cout<<"----Lautaro Ruso----"<<endl;
    cout<<"----Augusto Mingorance----"<<endl;
    cout<<"----Benjamin Garcia rodriguez----"<<endl;

        break;
        }
    system("pause");
}

/*nombre*/
void nombre ()
{
    system("cls");
    cout<<"ingrese nombre de usuario: ";
    string usuaryA;
    cin>>usuaryA;

}

/*nombre modo dios*/
void nombred ()
   {

    system("cls");
    cout<<"ingrese nombre de usuario: ";
    string(usuaryA);
    cin>>usuaryA;

   }
 // Nombres para versus
void nombresUsuarios ()
{
    cout<<"Ingrese nombre del primer usuario: ";
    string usuaryA;
    cin>>usuaryA;
    cout<<"Ingrese nombre del segundo usuario: ";
    string usuaryB;
    cin>>usuaryB;
}

/*menu*/
void menu()
{
    cout<<"|===========CHIMPOCO FIGTH==================|"<<endl;
    cout<<"|===========MENU PRINCIPAL==================|"<<endl;
    cout<<"|ingresa 1: --> Para ir al Modo Aventura.   |"<<endl;
    cout<<"|ingresa 2: --> Para ir al Modo Versus.     |"<<endl;
    cout<<"|ingresa 3: --> Para ir al God Mode.        |"<<endl;
    cout<<"|ingresa 4: --> Para ir a las Estadisticas. |"<<endl;
    cout<<"|ingrese 5: --> Para ir al  Manual.         |"<<endl;
    cout<<"|ingrese 0: --> Para Salir.                 |"<<endl;
    cout<<"|===========================================|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;


}


/*modo aventura*/
void modoAventura()
{
    int PV = 0;
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
/*combate modo aventura*/
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

 /*oponente modo aventura*/
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

/*chimpoco modo aventura*/
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
/*modo dios*/
void modoDios ()
{
    int PVD = 0;
    int enemigo[3];
    int chimpoco[3];
    nombred();
    eleccionChimpocod(chimpoco);
    for(int i =1 ; i <=5 ; i++){
        oponented(enemigo, i);
    combated(chimpoco, enemigo);
    if (chimpoco[PVD]<=0){
        break;
    }


}
}
/*combate modo dios*/
void combated(int chimpoco[], int enemigo[])
{
    int const PVD = 0;
    int const ataqueMinimod = 1;
    int const ataqueMaximod = 2;


    int const PVED = 0;
    int const ataqueMinimoEd = 1;
    int const ataqueMaximoEd = 2;

        bool salir = true;
    bool ataque = 0;
    int chimpocoPVDmax = chimpoco[PVD];
    int enemigoPVEDmax = enemigo[PVED];
    int eleccion;
     int elegirPocion;
        int cargasAtaqued = 99;
        int cargasDefensad = 99;
        int cargasVidad =99;
        int instanciaAtaqued = 0;
        int instanciaDefensad = 0;
    while (chimpoco[PVD]>0 && enemigo[PVED]>0){


    int ataqueEnemigod = enemigo[ataqueMinimoEd] + (rand()% (enemigo[ataqueMaximoEd] - enemigo[ataqueMinimoEd])+1);
        if(ataque == true){
            ataque = false;
            system("cls");
            cout<<"TURNO ENEMIGO"<<endl;
        if(instanciaDefensad != 0){
            ataqueEnemigod = ataqueEnemigod * 0.8;
            instanciaDefensad--;
            cout<<"te queda "<< instanciaDefensad<<"del boost de defensa"<<endl;
        }
                cout<<"ataque enemigo: "<< ataqueEnemigod<<endl;
            chimpoco[PVD] -= ataqueEnemigod;
            if (chimpoco[PVD]<0){
                chimpoco[PVD] = 0;

            }
            cout<<"Nuestra vida:"<< chimpoco[PVD] <<"/"<<chimpocoPVDmax<<endl;
            system("pause>nul");

        }
        else{
            ataque = true;
            system("cls");

            cout<<"TU TURNO"<<endl;
            cout<<"1 Ataque"<<endl;
            cout<<"2 Items"<<endl;
            cout<<"3 Salir del juego"<< endl;
            cin>>eleccion;
    int ataqueNuestrod = chimpoco[ataqueMinimod] + (rand()% (chimpoco[ataqueMaximod] - chimpoco[ataqueMinimod])+1);
            if (instanciaAtaqued != 0){
                ataqueNuestrod =  ataqueNuestrod * 1.30;
                instanciaAtaqued--;
                cout<<"te queda "<< instanciaAtaqued<<" del boost de ataque"<<endl;
            }
            if(eleccion == 1){

    cout<<"ataque chimpoco: "<< ataqueNuestrod<<endl;

            enemigo[PVED] -= ataqueNuestrod;
            if (enemigo[PVED]<0){
                enemigo[PVED] = 0;

            }
             cout<<"Vida enemiga: "<<enemigo[PVED]<<"/"<< enemigoPVEDmax<<endl;
            system("pause");

            }if (eleccion == 2){
            cout<<"Elegi un items "<<endl;
                cout<<"1 Boost de ataque "<< cargasAtaqued<<endl;
                cout<<"2 Boost de defensa "<< cargasDefensad<<endl;
                cout<<"3 Pocion de vida "<< cargasVidad<<endl;

                cin>>elegirPocion;

                    if(elegirPocion == 1 && cargasAtaqued != 0){

                        cout<<"elegiste el boost de ataque"<<endl;

                        instanciaAtaqued = 2;

                        cargasAtaqued--;

                    } else if(elegirPocion == 2 && cargasDefensad !=0){

                        cout<<"elegiste el boost de defensa"<<endl;
                        instanciaDefensad = 3;
                        cargasDefensad--;


                    }else if(elegirPocion == 3 && cargasVidad !=0){
                        if(chimpoco[PVD] >= chimpocoPVDmax){
                            cout<<"tenes la vida al maximo flaco que te vas a curar"<<endl;
                        }else{
                            cout<<"elegiste la pocion de vida"<<endl;
                            chimpoco[PVD] += chimpocoPVDmax *0.50;
                            cargasVidad--;
                            cout<<"te quedan"<<cargasVidad<<"pociones"<<endl;
                            if(chimpoco[PVD] > chimpocoPVDmax )
                                chimpoco[PVD] = chimpocoPVDmax;
                            if(cargasVidad == 0 ){
                            cout<<"Te quedaste sin pociones de vida";
                            }
                        }
                    }
            }else if (eleccion == 3) {
             cout << "Saliendo del juego... Regresando al menu principal." << endl;
            system("pause<nul");
            chimpoco[PVD] = 0;
             salir = false;
            }
        }


    }
    if (salir) {

    if(chimpoco[PVD]<=0){
    cout<<"mal ahi perdiste, suerte en la proxima"<<endl;
    system("pause");
    }else{
    cout<<"biennn ganaste amigo que capo"<<endl;
    system("pause");
    chimpoco[PVD]= chimpocoPVDmax;
    }
 }
}

/*chimpoco modo dios*/
void eleccionChimpocod(int chimpoco[])
{
    system("cls");
    int const PVD = 0;
    int const ataqueMinimod = 1;
    int const ataqueMaximod = 2;

    cout<<"Seleccione un Chimpoco"<<endl;
    int eleccion;
    cin>>eleccion;



    switch(eleccion)
    {
    case 1:
        cout<<"elegiste a Cole, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 40;
        chimpoco[ataqueMaximod] = 50;
        break;
    case 2:
        cout<<"elegiste a Kai, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 55;
        chimpoco[ataqueMaximod] = 65;

        break;
    case 3:
        cout<<"elegiste a Zane, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 35;
        chimpoco[ataqueMaximod] = 55;

        break;
    case 4:
        cout<<"elegiste a jay, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 15;
        chimpoco[ataqueMaximod] = 85;

        break;
    default:
        cout<<"eleccion no valida"<<endl;
        system("pause");
        break;

    }

}

/*oponente modo dios*/
void oponented(int enemigo [], int j)
{
    int const PVED = 0;
    int const ataqueMinimoEd = 1;
    int const ataqueMaximoEd = 2;

    switch(j)
    {
    case 1:
        enemigo [PVED] = 150;
        enemigo [ataqueMinimoEd] = 5;
        enemigo [ataqueMaximoEd] = 15;
        break;
    case 2:
        enemigo [PVED] = 300;
        enemigo [ataqueMinimoEd] = 25;
        enemigo [ataqueMaximoEd] = 45;
        break;
    case 3:
        enemigo [PVED] = 450;
        enemigo [ataqueMinimoEd] = 40;
        enemigo [ataqueMaximoEd] = 55;
        break;
    case 4:
        enemigo [PVED] = 700;
        enemigo [ataqueMinimoEd] = 55;
        enemigo [ataqueMaximoEd] = 75;
        break;
    case 5:
        enemigo [PVED] = 1500;
        enemigo [ataqueMinimoEd] = 25;
        enemigo [ataqueMaximoEd] = 150;
        break;
    }

}

/*modo versus*/
void modoVersus()
{
    int chimpocoA[3];
    int chimpocoB[3];
    bool dados = true;

    nombresUsuarios();

while (dados==true){
    dados=false;
    cout<<"Empieza tirando "/*<<usuaryA*/<<endl;;
    int dadoUsuarioA = 1 + (rand()% (6 - 1)+1);
    system("pause>nul");
    cout<<"El usuario "/*<<usuaryA*/<<" saco el numero "<<dadoUsuarioA<<endl;
    system("pause>nul");
    system("cls");
    cout<<"Sigue "/*<<usuaryB*/;
    int dadoUsuarioB = 1 + (rand()% (6 - 1)+1);
    system("pause>nul");
    cout<<"El usuario: "/*<<usuaryB*/<<" saco el numero "<<dadoUsuarioB<<endl;
    system("pause>nul");
    system("cls");

    if (dadoUsuarioA>dadoUsuarioB){
        cout<<"Empieza eligiendo "/*<<usuaryA*/<<endl;
        system("pause>nul");
        eleccionChimpocoA(chimpocoA);
    }else if (dadoUsuarioB>dadoUsuarioA){
        cout<<"Empieza eligiendo "/*<<usuaryB*/<<endl;
        system("pause>nul");
        eleccionChimpocoB(chimpocoB);
    }else {
        dados = true;
    }
}

combateVersus(chimpocoA, chimpocoB);
int PVA = 0;
int PVB = 0;

if (chimpocoA[PVA]<0){
        cout<<"gano1";
        system("pause<nul");
    }else if (chimpocoB[PVB]<0){
        cout<<"gano2";
        system("pause<nul");
    }

}

/*combate modo versus*/
void combateVersus(int chimpocoA[], int chimpocoB[])
{
    int const PVA = 0;
    int const ataqueMinimoA = 1;
    int const ataqueMaximoA = 2;

    int const PVB = 0;
    int const ataqueMinimoB = 1;
    int const ataqueMaximoB = 2;

    bool ataque = 0;

     int chimpocoAPVmax = chimpocoA[PVA];
    int chimpocoBPVmax = chimpocoB[PVB];

    int eleccionA;
     int elegirPocionA;
        int cargasAtaqueA = 3;
        int cargasDefensaA = 3;
        int cargasVidaA =3;
        int instanciaAtaqueA = 0;
        int instanciaDefensaA = 0;

    int eleccionB;
     int elegirPocionB;
        int cargasAtaqueB = 3;
        int cargasDefensaB = 3;
        int cargasVidaB =3;
        int instanciaAtaqueB = 0;
        int instanciaDefensaB = 0;

    while (chimpocoA[PVA]>0 && chimpocoB[PVB]>0){


    int ataqueChimpocoB = chimpocoB[ataqueMinimoB] + (rand()% (chimpocoB[ataqueMaximoB] - chimpocoB[ataqueMinimoB])+1);

        if(ataque == true){
            ataque = false;
            system("cls");

            cout<<"TURNO DE "/*<<usuaryB*/<<endl;
            cout<<"1 Ataque"<<endl;
            cout<<"2 Items"<<endl;
            cin>>eleccionB;
    int ataqueChimpocoB = chimpocoB[ataqueMinimoB] + (rand()% (chimpocoB[ataqueMaximoB] - chimpocoB[ataqueMinimoB])+1);
            if(eleccionB == 1){
        system("cls");
        cout<<"TURNO DE "/*<<usuaryB*/<<endl;
            if (instanciaAtaqueB != 0){
                    system("cls");
                ataqueChimpocoB =  ataqueChimpocoB * 1.30;
                instanciaAtaqueB--;
                cout<<"Usaste una carga del Boost de ataque, te quedan: "<< instanciaAtaqueB<<" carga/s"<<endl;
            }
    cout<<"ataque chimpoco: "<< ataqueChimpocoB<<endl;


            chimpocoA[PVA] -= ataqueChimpocoB;
            if (chimpocoA[PVA]<0){
                chimpocoA[PVA] = 0;
            }
            }else{
                system("cls");
                cout<<"Elegi un items "<<endl;
                cout<<"1 Boost de ataque "<< cargasAtaqueB<<endl;
                cout<<"2 Boost de defensa "<< cargasDefensaB<<endl;
                cout<<"3 Pocion de vida "<< cargasVidaB<<endl;

                cin>>elegirPocionB;

                    if(elegirPocionB == 1 && cargasAtaqueB != 0){
                        system("cls");
                        cout<<"elegiste el boost de ataque"<<endl;

                        instanciaAtaqueB = 2;
                        cargasAtaqueB--;
                        cout<<"te quedan "<<cargasAtaqueB<<" Boost de ataque"<<endl;
                        if(cargasAtaqueB == 0 ){
                            cout<<"Te quedaste sin Boost de ataque"<<endl;
                            }

                    } else if(elegirPocionB == 2 && cargasDefensaB !=0){
                        system("cls");
                        cout<<"elegiste el Boost de defensa"<<endl;
                        instanciaDefensaB = 3;
                        cargasDefensaB--;
                        cout<<"te quedan "<<cargasDefensaB<<" Boost de defensa"<<endl;
                        if(cargasDefensaB == 0 ){
                            cout<<"Te quedaste sin Boost de defensa"<<endl;
                            }


                    }else if(elegirPocionB == 3 && cargasVidaB !=0){
                        system("cls");
                        if(chimpocoB[PVB] >= chimpocoBPVmax){
                            cout<<"tenes la vida al maximo flaco que te vas a curar"<<endl;
                        }else{
                            cout<<"elegiste la pocion de vida"<<endl;
                            chimpocoB[PVB] += chimpocoBPVmax *0.50;
                            cargasVidaB--;
                            cout<<"te quedan "<<cargasVidaB<<" pociones"<<endl;
                            if(chimpocoB[PVB] > chimpocoBPVmax )
                                chimpocoB[PVB] = chimpocoBPVmax;
                            if(cargasVidaB == 0 ){
                            cout<<"Te quedaste sin pociones de vida"<<endl;
                            system("pause>nul");
                            }
                        }
                    }




            }
              if(eleccionB == 2){
                    system("cls");
                cout<<"No atacaste por elegir un item"<<endl;
              }
            cout<<"Vida del contrincante: "<<chimpocoA[PVA]<<"/"<< chimpocoAPVmax<<endl;
            system("pause>nul");

        }
        else{
            ataque = true;
            system("cls");

            cout<<"TURNO DE "/*<<usuaryA*/<<endl;
            cout<<"1 Ataque"<<endl;
            cout<<"2 Items"<<endl;
            cin>>eleccionA;
    int ataqueChimpocoA = chimpocoA[ataqueMinimoA] + (rand()% (chimpocoA[ataqueMaximoA] - chimpocoA[ataqueMinimoA])+1);
            if(eleccionA == 1){
        system("cls");
        cout<<"TURNO DE "/*<<usuaryA*/<<endl;
            if (instanciaAtaqueA != 0){
                    system("cls");
                ataqueChimpocoA =  ataqueChimpocoA * 1.30;
                instanciaAtaqueA--;
                cout<<"Usaste una carga del Boost de ataque, te quedan: "<< instanciaAtaqueA<<" carga/s"<<endl;
            }
    cout<<"ataque chimpoco: "<< ataqueChimpocoA<<endl;


            chimpocoB[PVB] -= ataqueChimpocoA;
            if (chimpocoB[PVB]<0){
                chimpocoB[PVB] = 0;
            }
            }else{
                system("cls");
                cout<<"Elegi un items "<<endl;
                cout<<"1 Boost de ataque "<< cargasAtaqueA<<endl;
                cout<<"2 Boost de defensa "<< cargasDefensaA<<endl;
                cout<<"3 Pocion de vida "<< cargasVidaA<<endl;

                cin>>elegirPocionA;

                    if(elegirPocionA == 1 && cargasAtaqueA != 0){
                        system("cls");
                        cout<<"elegiste el boost de ataque"<<endl;

                        instanciaAtaqueA = 2;
                        cargasAtaqueA--;
                        cout<<"te quedan "<<cargasAtaqueA<<" Boost de ataque"<<endl;
                        if(cargasAtaqueA == 0 ){
                            cout<<"Te quedaste sin Boost de ataque"<<endl;
                            }

                    } else if(elegirPocionA == 2 && cargasDefensaA !=0){
                        system("cls");
                        cout<<"elegiste el Boost de defensa"<<endl;
                        instanciaDefensaA = 3;
                        cargasDefensaA--;
                        cout<<"te quedan "<<cargasDefensaA<<" Boost de defensa"<<endl;
                        if(cargasDefensaA == 0 ){
                            cout<<"Te quedaste sin Boost de defensa"<<endl;
                            }


                    }else if(elegirPocionA == 3 && cargasVidaA !=0){
                        system("cls");
                        if(chimpocoA[PVA] >= chimpocoAPVmax){
                            cout<<"tenes la vida al maximo flaco que te vas a curar"<<endl;
                        }else{
                            cout<<"elegiste la pocion de vida"<<endl;
                            chimpocoA[PVA] += chimpocoAPVmax *0.50;
                            cargasVidaA--;
                            cout<<"te quedan "<<cargasVidaA<<" pociones"<<endl;
                            if(chimpocoA[PVA] > chimpocoAPVmax )
                                chimpocoA[PVA] = chimpocoAPVmax;
                            if(cargasVidaA == 0 ){
                            cout<<"Te quedaste sin pociones de vida"<<endl;
                            system("pause>nul");
                            }
                        }
                    }




            }
              if(eleccionA == 2){
                    system("cls");
                cout<<"No atacaste por elegir un item"<<endl;
              }
            cout<<"Vida del contrincante: "<<chimpocoB[PVB]<<"/"<< chimpocoBPVmax<<endl;
            system("pause>nul");

        }
    }
    if(chimpocoA[PVA]<=0){
    cout<<"Gano el usuario: "/*<<usuaryB*/<<endl;
    system("pause>nul");
    chimpocoA[PVA]= chimpocoAPVmax;
    }
    else {
    cout<<"Gano el usuario: "/*<<usuaryA*/<<endl;
    system("pause>nul");
    chimpocoB[PVB]= chimpocoBPVmax;

    }
}

/*modo versus chimpoco A*/
void eleccionChimpocoA (int chimpocoA[])
{
    int const PVA = 0;
    int const ataqueMinimoA = 1;
    int const ataqueMaximoA = 2;

    cout<<" elegi tu chimpoco: "<<endl;

    int eleccion;
    cin>>eleccion;



    switch(eleccion)
    {
    case 1:
        cout<<"elegiste a Cole, buena eleccion"<<endl;
        system ("pause");
        chimpocoA[PVA] = 1200;
        chimpocoA[ataqueMinimoA] = 40;
        chimpocoA[ataqueMaximoA] = 50;

        break;
    case 2:
        cout<<"elegiste a Kai, buena eleccion"<<endl;
        system ("pause");
        chimpocoA[PVA] = 500;
        chimpocoA[ataqueMinimoA] = 55;
        chimpocoA[ataqueMaximoA] = 65;

        break;
    case 3:
        cout<<"elegiste a Zane, buena eleccion"<<endl;
        system ("pause");
        chimpocoA[PVA] = 700;
        chimpocoA[ataqueMinimoA] = 35;
        chimpocoA[ataqueMaximoA] = 55;

        break;
    case 4:
        cout<<"elegiste a jay, buena eleccion"<<endl;
        system ("pause");
        chimpocoA[PVA] = 600;
        chimpocoA[ataqueMinimoA] = 15;
        chimpocoA[ataqueMaximoA] = 85;

        break;
    default:
        cout<<"eleccion no valida"<<endl;
        system("pause");
        break;
    }


}

/*modo versus chimpoco B*/
void eleccionChimpocoB (int chimpocoB[])
{
    int const PVB = 0;
    int const ataqueMinimoB = 1;
    int const ataqueMaximoB = 2;
    cout<<" elegi tu chimpoco: "<<endl;

    int eleccion;
    cin>>eleccion;



    switch(eleccion)
    {
    case 1:
        cout<<"elegiste a Cole, buena eleccion"<<endl;
        system ("pause");
        chimpocoB[PVB] = 1200;
        chimpocoB[ataqueMinimoB] = 40;
        chimpocoB[ataqueMaximoB] = 50;

        break;
    case 2:
        cout<<"elegiste a Kai, buena eleccion"<<endl;
        system ("pause");
        chimpocoB[PVB] = 500;
        chimpocoB[ataqueMinimoB] = 55;
        chimpocoB[ataqueMaximoB] = 65;

        break;
    case 3:
        cout<<"elegiste a Zane, buena eleccion"<<endl;
        system ("pause");
        chimpocoB[PVB] = 700;
        chimpocoB[ataqueMinimoB] = 35;
        chimpocoB[ataqueMaximoB] = 55;

        break;
    case 4:
        cout<<"elegiste a jay, buena eleccion"<<endl;
        system ("pause");
        chimpocoB[PVB] = 600;
        chimpocoB[ataqueMinimoB] = 15;
        chimpocoB[ataqueMaximoB] = 85;

        break;
    default:
        cout<<"eleccion no valida"<<endl;
        system("pause");
        break;
    }


}


