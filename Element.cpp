#include "Element.hpp"
#include <string>
using namespace std;



Element::Element(string type, int lumens, int watts, int colour)
{
    Type = type;
    Lumens = lumens;
    Watts = watts;
    Colour = colour;
}

void Element::Show()
{
    cout<<Type<<"  "<<Lumens<<"  "<<Watts<<"  "<<Colour<<endl;
}

// ostream& operator<< (ostream &wyjscie, Element const& ex)
// {
//    wyjscie << "" << ex << endl;
//    return wyjscie;
// }