#include "Application.hpp"

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
        
        cout<<"MENU"<<endl;
        cout<<"1. Wyswietl elementy."<<endl;
        cout<<"2. Dodaj element."<<endl;
        cout<<"3. Usun element."<<endl;
        cout<<"4. Wyjscie."<<endl;
        cout<<"Wybierz opcje: "<<endl;
        int c;
        cin>>c;
        switch(c)
        {
            case 1: ClrScr(); 
                    doc.showElements();  break;
            case 2: subAdd();            break;
            case 3: subMenu();           break;
            case 4: return;              break;
            default: showError();        break;
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
    ClrScr();
}

void Application::subMenu()
{
    while(true)
    {
        cout<<"========"<<endl;
        cout<<" USUWANIE"<<endl;
        cout<<" 1. Usuń ostatni"<<endl;
        cout<<" 2. Usuń pierwszy "<<endl;
        cout<<" 3. Usun element o danym ID"<<endl;
        cout<<" 4. Wróć"<<endl;
        cout<<" Wybierz opcje: "<<endl;
        int c;
        cin>>c;
        switch(c)
        {
            case 1: doc.deleteLast();
                    ClrScr(); return; break;
            case 2: doc.deleteFirst();
                    ClrScr();return; break;
            case 3: subDelete(); return; break;
            case 4: return;break;
            default: showError(); break;
        }
        ClrScr();
    }
}

void Application::subDelete()
{  
    cout<<endl<<"Który element chcesz usunac? "<<endl;
    int n;
    cin>>n;
    while(doc.deleteElement(n)!=0) 
    {
        cout<<"Podaj poprawny numer elementu! "<<endl;
        cin>>n;
    }
    ClrScr();
}

void Application::subAdd()
{
    string type;
    int lumens, watts, colour;

    cout<<"Podaj typ zarowki (LED, halogen, tradycyjna, swietlowka): "<<endl;
    
    getline(cin, type);
    while( type!="LED" && type!="halogen" && type!="swietlowka" && type!="tradycyjna")
    {
        cin.clear();
        cin.ignore( 1000, '\n' );
        cout<<endl<<"Nieznany typ! "<<endl;
        cin>>type;
    } 

    cout<<"Podaj ilosc lumenow: "<<endl;
    cin>>lumens;

    cout<<"Podaj moc w watach: "<<endl;
    cin>>watts;

    cout<<"Podaj barwe w Kelwinach: "<<endl;
    cin>>lumens;
    
    doc.addElement(type, lumens, watts, lumens);
    ClrScr();
}