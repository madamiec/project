#include <string>
#include <iostream>
using namespace std;

class Element
{
    private:
    string Type; // LED, tradycyjna, swietlikowka, halogen
    int Lumens; // w lumenach
    int Watts;  // moc w watach
    int Colour; // barwa w Kelwinach (K)

    public:
    // friend ostream& operator<< (ostream&, Element const&);
    Element( string type, int lumens, int watts, int colour); 
    void Show();
};