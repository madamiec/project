#include "Element.hpp"
#include <list>
#include <svgpp.hpp>


class Document
{   
    private:
    
    
    public:
    void showElements();
    int deleteElement(int);
    void addElement(string, int, int, int);
    void deleteLast();
    void deleteFirst();
    list<Element> elements;
    static int counter;
};