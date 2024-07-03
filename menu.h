#ifndef MENU_H
#define MENU_H

#include <vector>
#include "item.h"

class Menu {
private:
    std::vector<Item> items;

public:
    void addMenuItem();
    void editMenuItem();
    void deleteMenuItem();
    void displayMenu();
    void manageMenu();
};

#endif // MENU_H
