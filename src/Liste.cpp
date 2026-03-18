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
    tmp->setPrevious(e); // für doppeltverkettete listen
}

void Liste::einfuegenEnde(Element* e)
{
    if (kopfzeiger == nullptr)
    {
        kopfzeiger = e;
        return;
    }

    Element* tmp = this->kopfzeiger;
    
    while (tmp->getNext() != nullptr)
    {
        tmp = tmp->getNext();
    }
    tmp->setNext(e);
    e->setPrevious(tmp);
}

void Liste::entferneAnfang()
{
    if (kopfzeiger == nullptr) return;

    kopfzeiger = kopfzeiger->getNext();
    kopfzeiger->setPrevious(nullptr);
}

void Liste::entferneEnde()
{
    Element* tmp = this->kopfzeiger;
    
    while (tmp->getNext()->getNext() != nullptr)
    {
        tmp = tmp->getNext();
    }
    tmp->getNext()->setPrevious(nullptr);
    tmp->setNext(nullptr);
}

Element *Liste::sucheElement(int a)
{
    Element* tmp = kopfzeiger;

    while (tmp->getNext() != nullptr)
    {
        if(tmp->getNumber() == a)
        {
            return tmp;
        }

        tmp = tmp->getNext();
    }

    return nullptr;
}

void Liste::ausgabe()
{
    Element* tmp = this->kopfzeiger;

    while (tmp->getNext() != nullptr)
    {
        cout    << "Element Adresse: " << tmp << endl
                << "Element Zahl: " << tmp->getNumber() << endl 
                << "Element Next: " << tmp->getNext() << endl
                << "Element Previous: " << tmp->getPrevious() << endl
                << endl;
                
        tmp = tmp->getNext();
    }
}

float Liste::calcAvgNum()
{
    Element* tmp = kopfzeiger;
    int zaehler = 0;
    float durchschnitt = 0.0;

    if (kopfzeiger == nullptr) return 0.0;

    while (tmp != nullptr)
    {
        durchschnitt += tmp->getNumber();
        tmp = tmp->getNext();
        zaehler++;
    }

    durchschnitt = durchschnitt / zaehler;

    return durchschnitt;
}