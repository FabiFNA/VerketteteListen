#pragma once

class Element
{
private:
    int number;
    Element* next;
    Element* previous;

public:
    Element();
    Element(int i);
    ~Element();

    //setter
    void addNumber(int n);
    void setNext(Element* e);
    void setPrevious(Element* e);

    //getter
    int getNumber();
    Element* getNext();
    Element* getPrevious();
};

#pragma end