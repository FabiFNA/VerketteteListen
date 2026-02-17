#include <iostream>
#include "../include/Element.h"
#include "../include/Liste.h"

using namespace std;

int main()
{
    Element e1(15);
    Element e2(20);
    Element e3(25);
    Element e4(30);

    Liste l(&e1);

    l.einfuegenEnde(&e2);
    l.einfuegenEnde(&e3);
    l.einfuegenAnfang(&e4);

    // Reihenfolge: e4, e1, e2, e3

    //l.ausgabe();

    e1.getNext();
    e2.getNext();
    e3.getNext();
    e4.getNext();
}
