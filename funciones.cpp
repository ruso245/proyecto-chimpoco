#include <iostream>
#include <cstdlib>

using namespace std;
    int const PVE = 0;
    int const ataqueMinimoE = 1;
    int const ataqueMaximoE = 2;

    int const PV = 0;
    int const ataqueMinimo = 1;
    int const ataqueMaximo = 2;

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


void oponente(int enemigo [], int i)
{


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

void nombre ()
{
    system("cls");
    cout<<"ingrese nombre de usuario: ";
    string(usuaryA);
    cin>>usuaryA;

}

void pociones()
{
    int elegirPocion;
    cout<<"Elegi un items "<<endl;
                cout<<"1 Boost de ataque"<<endl;
                cout<<"2 Boost de defensa"<<endl;
                cout<<"3 Pocion de vida"<<endl;

                cin>>elegirPocion;

            switch(elegirPocion){

            case 1:
                cout<<"Elegiste el boost de ataque";
                break;
            case 2:
                cout<<"Elegiste el boost de defensa";
                break;
            case 3:
                cout<<"Elegiste el pocion de vida";

                cout<<"Te curas un 50% de tu vida";
                break;
            }
}


void eleccionChimpoco(int chimpoco[])
{
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
void combate(int chimpoco[], int enemigo[])
{
    bool ataque = 0;
    int chimpocoPVmax = chimpoco[PV];
    int enemigoPVEmax = enemigo[PVE];
    int eleccion;


    while (chimpoco[PV]>0 && enemigo[PVE]>0){


        if(ataque == true){
            ataque = false;
            system("cls");
            cout<<"TURNO ENEMIGO"<<endl;
    int ataqueEnemigo = enemigo[ataqueMinimoE] + (rand()% (enemigo[ataqueMaximoE] - enemigo[ataqueMinimoE])+1);
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
            cout<<"1Ataque"<<endl;
            cout<<"2Items"<<endl;
            cin>>eleccion;
            if(eleccion == 1){

    int ataqueNuestro = chimpoco[ataqueMinimo] + (rand()% (chimpoco[ataqueMaximo] - chimpoco[ataqueMinimo])+1);
    cout<<"ataque chimpoco: "<< ataqueNuestro<<endl;

            enemigo[PVE] -= ataqueNuestro;
            if (enemigo[PVE]<0){
                enemigo[PVE] = 0;
            }
            }else{



            }
            cout<<"Vida enemiga: "<<enemigo[PVE]<<"/"<< enemigoPVEmax<<endl;
            system("pause>nul");

        }
    }
    if(chimpoco[PV]<0){
    cout<<"Que pete perdiste XD"<<endl;
    system("pause");
    }
    else {
    cout<<"GG ganaste flaco"<<endl;
    system("pause");
    chimpoco[PV]= chimpocoPVmax;
    }
}

void modoAventura()
{
    int enemigo[3];
    int chimpoco[3];
    nombre();
    eleccionChimpoco(chimpoco);
    for(int i =1 ; i <=5 ; i++){
        oponente(enemigo, i);
    combate(chimpoco, enemigo);
    if (chimpoco[PV]<0){
        break;
    }



    }










}




void manual()
{

    system("cls");
    cout<<"manual:"<<endl;
    cout<<"Chimpoco Fight es un juego de pelea por turnos para uno/dos jugadores en el que"<<endl;
    cout<<"juegan con estrategia y el azar."<<endl;
    cout<<"Lo primero que tenes que hacer como entrenador Chimpocomon es elegir tu Chimpo compañero"<<endl;
    cout<<"para embarcarte en la lucha por la supremacia."<<endl;
    cout<<"Tu y tu chimpoco deberan enfrentarse a 5 enemigos uno mas poderoso que el otro. Puedes elegir entre 4 Chimpocos para que te acompañen."<<endl,
        cout<<"Hay 4 Chimpocos de diferentes elementos:"<<endl;
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

    cout<<"Nuestro juego cuenta con 3 modos:"<<endl;
    cout<<"Modo Aventura: Este modo de juego permite al jugador iniciar su historia como entrenador Chimpocomon y pelar contra los cinco oponentes."<<endl;
    cout<<"Primero deberas ingresar tu nombre de jugador y asi luego poder elegir tu compañero chimpoco. una vez que lo eligas comenzara la batalla contra los oponentes."<<endl;
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
    cout<<"-El daño causado y el daño recibido."<<endl;

    cout<<"----DETALLES SOBRE EL JUEGO----"<<endl;
    cout<<"--> Funcion de los combates:"<<endl;
    cout<<"-Tanto en el Modo Aventura como en el God Mode los participantes luego de ingresar su nombre deberan elegir un chimpoco con el que pelear."<<endl;
    cout<<"Los combates se mediran por turnos, en tu turno podras causarle daño al enemigo, tambien podras usar items especiales/pociones que le daran al chimpoco mejoras por cierta cantidad de turnos."<<endl;
    cout<<"-En el Modo Versus 2 jugadores podran tirar un dado asi determinar quien elige al chimpoco primero y enfrentarse entre si."<<endl;

    cout<<"--> Pociones (items especiales):"<<endl;
    cout<<"-Pocion de ataque: Esta pocion nos dara un 30% de aumento de daño de ataque durante dos turnos, solo se podra utilizar una vez."<<endl;
    cout<<"-Pocion de defensa: Esta pocion nos dara un 205 de aumento en nuestra defensa, tambien durara dos turnos y podremos utilizarla una vez."<<endl;
    cout<<"-Pocion de vida: Esta pocion la podremos usar dos veces y nos aumentara/recargara la vida total de nuestro chimpoco un 50% en el combate."<<endl;


    cout<<"--->CREDITOS DE DESARROLLADORES<---"<<endl;
    cout<<"----Lautaro Ruso----"<<endl;
    cout<<"----Augusto Mingorance----"<<endl;
    cout<<"----Benjamin Garcia rodriguez----"<<endl;
    system("pause");
}
