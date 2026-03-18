#include <iostream>
#include "../include/Element.h"
#include "../include/Liste.h"

using namespace std;

int main()
{
    Element schueler1(15);
    Element schueler2(20);
    Element schueler3(25);
    Element schueler4(30);
    
    /*
    
    // Element* paul = new Element(10);
    Element schueler1(10);
    Element schueler2(10);
    Element schueler3(10);
    Element schueler4(10);
    */

    Liste kurs(&schueler1);

    kurs.einfuegenEnde(&schueler2);
    kurs.einfuegenEnde(&schueler3);
    kurs.einfuegenAnfang(&schueler4);

    // Reihenfolge: e4, e1, e2, e3

    //l.ausgabe();

    schueler1.getNext();
    schueler2.getNext();
    schueler3.getNext();
    schueler4.getNext();

    cout << schueler1.getNext()->getNumber() << endl;
    cout << "Durchschnitt: " << kurs.calcAvgNum() << endl;

    /*
    cout << schueler1.getNumber() << endl;
    cout << schueler2.getNumber() << endl;
    cout << schueler3.getNumber() << endl;
    cout << schueler4.getNumber() << endl;
    */

}
