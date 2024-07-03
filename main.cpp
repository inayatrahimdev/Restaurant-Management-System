#include <iostream>
#include "menu.h"
#include "order.h"
#include "customer.h"
#include "inventory.h"
#include "report.h"

int main() {
    Menu menu;
    Order order;
    Customer customer;
    Inventory inventory;
    Report report;

    int choice;
    do {
        std::cout << "Welcome to Restaurant Management System\n";
        std::cout << "1. Manage Menu\n";
        std::cout << "2. Take Order\n";
        std::cout << "3. Manage Customers\n";
        std::cout << "4. Manage Inventory\n";
        std::cout << "5. Generate Reports\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                menu.manageMenu();
                break;
            case 2:
                order.takeOrder();
                break;
            case 3:
                customer.manageCustomers();
                break;
            case 4:
                inventory.manageInventory();
                break;
            case 5:
                report.generateReports();
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 0);

    return 0;
}
