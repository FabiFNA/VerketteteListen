#pragma once
#include "Element.h"

class Liste
{
private:
    Element* kopfzeiger;

public:
    Liste(Element* e);
    ~Liste();

    //misc
    void einfuegenAnfang(Element* e);
    void einfuegenEnde(Element* e);

    void entferneAnfang();
    void entferneEnde();

    Element* sucheElement(int a);

    void ausgabe();
};