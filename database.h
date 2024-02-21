#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <vector>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

class Database {
public:
    void addProduct(const string& name, double price, int quantity);
    void editProduct(const string& name, double newPrice, int newQuantity);
    void deleteProduct(const string& name);

private:
    vector<Product> products;
};

#endif
