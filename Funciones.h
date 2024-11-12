#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
/*EXTRAS*/
void menu();
void nombre();
void manual();
void nombred();
void nombresUsuarios ();

/*modo aventura*/
void modoAventura();
void combate(int chimpoco[], int enemigo[]);
void oponente(int enemigo [], int i);
void eleccionChimpoco(int chimpoco[]);

/*modo dios*/
void modoDios ();
void combated(int chimpoco[], int enemigo[]);
void eleccionChimpocod(int chimpoco[]);
void oponented(int enemigo[], int j);

/*modo versus*/
void modoVersus();
void combateVersus(int chimpocoA[], int chimpocoB[]);
void eleccionChimpocoA (int chimpocoA[]);
void eleccionChimpocoB (int chimpocoB[]);

#endif // FUNCIONES_H_INCLUDED
