#include "database.h"

void Database::addProduct(const string& name, double price, int quantity) {
    Product newProduct = { name, price, quantity };
    products.push_back(newProduct);
}

void Database::editProduct(const string& name, double newPrice, int newQuantity) {
    for (auto& product : products) {
        if (product.name == name) {
            product.price = newPrice;
            product.quantity = newQuantity;
            break;
        }
    }
}

void Database::deleteProduct(const string& name) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->name == name) {
            products.erase(it);
            break;
        }
    }
}
