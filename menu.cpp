#include "menu.h"
#include <iostream>

void Menu::addMenuItem() {
    std::string name;
    double price;

    std::cout << "Enter item name: ";
    std::cin >> name;
    std::cout << "Enter item price: ";
    std::cin >> price;

    items.push_back(Item(name, price));
}

void Menu::editMenuItem() {
    int index;
    std::string name;
    double price;

    std::cout << "Enter item index to edit: ";
    std::cin >> index;

    if (index >= 0 && index < items.size()) {
        std::cout << "Enter new item name: ";
        std::cin >> name;
        std::cout << "Enter new item price: ";
        std::cin >> price;

        items[index].setName(name);
        items[index].setPrice(price);
    } else {
        std::cout << "Invalid index\n";
    }
}

void Menu::deleteMenuItem() {
    int index;

    std::cout << "Enter item index to delete: ";
    std::cin >> index;

    if (index >= 0 && index < items.size()) {
        items.erase(items.begin() + index);
    } else {
        std::cout << "Invalid index\n";
    }
}

void Menu::displayMenu() {
    if (items.empty()) {
        std::cout << "Menu is empty\n";
    } else {
        for (size_t i = 0; i < items.size(); ++i) {
            std::cout << i << ". " << items[i].getName() << " - $" << items[i].getPrice() << "\n";
        }
    }
}

void Menu::manageMenu() {
    int choice;
    do {
        std::cout << "Menu Management\n";
        std::cout << "1. Add Menu Item\n";
        std::cout << "2. Edit Menu Item\n";
        std::cout << "3. Delete Menu Item\n";
        std::cout << "4. Display Menu\n";
        std::cout << "0. Back to Main Menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                addMenuItem();
                break;
            case 2:
                editMenuItem();
                break;
            case 3:
                deleteMenuItem();
                break;
            case 4:
                displayMenu();
                break;
            case 0:
                std::cout << "Returning to Main Menu\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 0);
}
