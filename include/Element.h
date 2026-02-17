#pragma once

class Element
{
private:
    int number;
    Element* next;

public:
    Element();
    Element(int i);
    ~Element();

    //setter
    void addNumber(int n);
    void setNext(Element* e);

    //getter
    int getNumber();
    Element* getNext();
};

#pragma end