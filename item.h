#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    double price;

public:
    Item(const std::string& name, double price) : name(name), price(price) {}

    std::string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    void setName(const std::string& newName) {
        name = newName;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }
};

#endif // ITEM_H
