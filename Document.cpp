#include "Document.hpp"

int Document::counter=0;
void Document::addElement(string type, int lumens, int watts, int colour)
{
    counter++;
    
    Element el(type, lumens, watts, colour);
    elements.push_back(el);
    //elements.back().Show();
      
} 

void Document::showElements()
{
    int temp=1;
    for(list<Element>::iterator i = elements.begin(); i != elements.end(); ++i)
    {
        cout<<temp<<". ";
        i->Show();
        temp++;
    }
    cout<<endl;
}
int Document::deleteElement(int n)
{   
    if(n<0 || n>counter-1) return 1;

    int temp=1;
    for(list<Element>::iterator i = elements.begin(); i != elements.end(); ++i )
    {
        if(n==temp)
        {
             i = elements.erase(i);
             break;
        }
        else temp++;
        cout<<temp;
    }    
    counter--;
    return 0;
}
void Document::deleteLast()
{
    elements.pop_back();
    counter--;
}
void Document::deleteFirst()
{
    elements.pop_front();
    counter--;
}