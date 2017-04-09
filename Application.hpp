#ifndef Application_hpp
#define Application_hpp

#include "Document.hpp"

class Application
{
    public:
    void Run();
    Document doc;

    private:
    void showError();
    void subMenu();
    void subDelete();
    void subAdd();

};
#endif