#include "menu.h"


using namespace std;

int main()
{
   
    Menu *menu = new Menu();
    menu->menu();
    delete menu;
    return 0;
}
