#include "item.h"

Item::Item(const std::string& name, double price) : name(name), price(price) {}

std::string Item::getName() const {
    return name;
}

double Item::getPrice() const {
    return price;
}

void Item::setName(const std::string& newName) {
    name = newName;
}

void Item::setPrice(double newPrice) {
    price = newPrice;
}
