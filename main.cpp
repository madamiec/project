#include "Application.hpp"
#include "Element.hpp"
int main()
{
   Application app;
   app.Run();
   Element el("LED", 22, 10, 3000);
   el.Show();
}