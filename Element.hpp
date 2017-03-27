#include <string>
#include <iostream>
using namespace std;

class Element
{
    private:
    string Type; // LED, compact, traditional, halogen
    int Lumens; // w lumenach
    int Watts;  // wyswietla informacje o mocy
    int Colour; // w Kelwinach (K)

    public:
    Element(string type, int lumens, int watts, int colour); 
    void Show();
};