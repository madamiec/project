#include "Application.hpp"
#include "Document.hpp"
#include <iostream>
#include <cstdio>
#include <unistd.h>

using namespace std;

void ClrScr()
{
  printf("\033[2J"); // Czyści ekran
  printf("\033[0;0f"); // Ustawia kursor w lewym, górnym rogu
}

void Application::Run()
{
    while(true)
    {
        ClrScr();
        cout<<"MENU"<<endl;
        cout<<"1. Wyswietl elementy."<<endl;
        cout<<"2. Dodaj element."<<endl;
        cout<<"3. Usun element"<<endl;
        cout<<"Wybierz opcje: "<<endl;
        int c;
        Document doc;
        cin>>c;
        switch(c)
        {
            case 1: doc.showElements(); break;
            case 2: doc.createElement(); break;
            case 3: doc.deleteElement(); break;
            default: showError(); break;
        }
    }
    

}

void Application::showError()
{
    cin.clear();
    cin.ignore( 1000, '\n' );
    cout<<"Wybierz opcje z menu! 1, 2 lub 3."<<endl;
    //while (getchar() != '\n');
    sleep(2);
}