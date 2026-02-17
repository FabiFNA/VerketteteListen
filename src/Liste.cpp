#include <iostream>
#include "../include/Liste.h"
#include "Liste.h"

using namespace std;

Liste::Liste(Element *e) : kopfzeiger(e) // damit man die liste nicht ohne kopfzeiger erstellen kann
{
}

Liste::~Liste()
{
}

void Liste::einfuegenAnfang(Element *e)
{
    Element* tmp = this->kopfzeiger; // alten head speichern
    e->setNext(tmp); // alten head als nachfolger speichern
    this->kopfzeiger = e; // neues element zum head machen
}

void Liste::einfuegenEnde(Element* e)
{
    Element* tmp = this->kopfzeiger;
    
    while (tmp->getNext() != nullptr)
    {
        tmp = tmp->getNext();
    }
    tmp->setNext(e);
}

void Liste::entferneAnfang()
{
}

void Liste::entferneEnde()
{
}

Element *Liste::sucheElement(int a)
{
    return nullptr;
}

void Liste::ausgabe()
{
    Element* tmp = this->kopfzeiger;

    while (tmp->getNext() != nullptr)
    {
        cout << "Element Adresse: " << tmp << endl << "Element Zahl: " << tmp->getNext() << endl << endl;
        tmp = tmp->getNext();
    }
}
