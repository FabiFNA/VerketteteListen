#include <iostream>
#include "../include/Element.h"

using namespace std;

Element::Element()
{
    this->number = 0;
    this->next = nullptr;
    this->previous = nullptr;
}

Element::Element(int i) : number(i)
{
    this->next = nullptr;
    this->previous = nullptr;
}

Element::~Element()
{
}

void Element::addNumber(int n)
{
    this->number = n;
}

void Element::setNext(Element *e)
{
    this->next = e;
}

void Element::setPrevious(Element *e)
{
    this->previous = e;
}

int Element::getNumber()
{
    //cout << "Zahl: " << this->number << endl;
    return this->number;
}

Element* Element::getNext()
{
    //cout << "Next: " << this->next << endl;
    return this->next;
}

Element* Element::getPrevious()
{
    return this->previous;
}