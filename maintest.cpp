

/*! \file maintest.cpp
    \brief file di test per il progetto.

    @author Lorenzo Travi


*/

#include <iostream>

#include "polygon.h"
#include "RightTrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"
#include "CreazioneOggetti.h"

using namespace std;

int main() {

    // Costruttore per parametri rettangolo.
    Rectangle a1(2,4);
    a1.Dump();
    cout << "Creazione rettangolo 1 con parametri lunghezza 2, larghezza 4." << endl;


    // Assegnazione Lunghezza
    a1.SetLength(5);
    cout << "Modificata lunghezza rettangolo 1. Valore attuale  lunghezza 5. " << endl;
    a1.Dump();


    // Assegnazione Larghezza
    a1.SetWidth(7);
    cout << "Modificata larghezza rettangolo 1. Valore attuale  larghezza 7. " << endl;
    a1.Dump();


    // Assegnazione dimensioni
    a1.SetDim(11,13);
    cout << "Modificata larghezza e larghezza rettangolo 1. Valori attual1: lunghezza 11, larghezza 13. " << endl;
    a1.Dump();


    // Costruttore di default rettangolo.
    Rectangle a2;
    a2.Dump();
    cout << "Creazione rettangolo 2 per default." << endl;

   

    // Costruttore di copia rettangolo.
    Rectangle a3(a1);
    a3.Dump();
    cout << "Creazione rettangolo 3 per copia da rettangolo 1." << endl;




    // Costruttore per parametri rombo.
    Rhombus b1(2,4);
    b1.Dump();
    cout << "Creazione rombo 1 con parametri 2,4." << endl;


    // Assegnazione diagonale orizzontale
    b1.SetHorD(5);
    cout << "Modificata diagonale orizzontale rombo 1. Valore attuale  diagonale orizzontale 5. " << endl;
    b1.Dump();


    // Assegnazione diagonale verticale
    b1.SetVerD(7);
    cout << "Modificata diagonale verticale rombo 1. Valore attuale  diagonale verticale 7. " << endl;
    b1.Dump();


    // Assegnazione dimensioni
    b1.SetDim(11, 13);
    cout << "Modificata diagonale orizzontale e diagonale verticale rombo 1. Valori attual1: diagonale orizzontale 11, diagonale verticale 13. " << endl;
    b1.Dump();

    // Costruttore di default rombo.
    Rhombus  b2;
    b2.Dump();
    cout << "Creazione rombo 2 per default." << endl;


    // Costruttore di copia rombo.
    Rhombus b3(b1);
    b3.Dump();
    cout << "Creazione rombo 3 per copia da rombo 1." << endl;




    // Costruttore per parametri trapezio rettangolo destro.
    RightTrapezoid c1(3, 2, 4);
    c1.Dump();
    cout << "Creazione trapezio trapezio destro 1 con parametri 3,2,4." << endl;


    // Assegnazione base inferiore
    c1.SetBottomSide(5);
    cout << "Modificata  base inferiore trapezio 1. Valore attuale   base inferiore 5. " << endl;
    c1.Dump();


    // Assegnazione base superiore
    c1.SetTopSide(4);
    cout << "Modificata base superiore trapezio 1. Valore attuale  base superiore 4. " << endl;
    c1.Dump();

    // Assegnazione altezza
    c1.SetHeight(9);
    cout << "Modificata altezza trapezio 1. Valore attuale  altezza 9. " << endl;
    c1.Dump();


    // Assegnazione dimensioni
    c1.SetDim(13, 11, 17);
    cout << "Modificata base inferiore, superiore e altezza trapezio 1. Valori attual1: base inferiore 13, base superiore 11, altezza 17. " << endl;
    c1.Dump();


    // Costruttore di default trapezio rettangolo destro.
    RightTrapezoid c2;
    //c2.Dump(); 
    /* Non è possibile chiamare la funzione dump() dell'oggetto non inizializzato.
    L'oggetto creato per default ha base maggiore e base minore uguali (nulle). La funzione fornisce errore.
        */
  

    // Costruttore di copia trapezio rettangolo destro.
    RightTrapezoid c3(c1);
    c3.Dump();
    cout << "Creazione trapezio rettangolo destro 3 per copia da trapezio rettangolo destro 1." << endl;

    return 0;
}

