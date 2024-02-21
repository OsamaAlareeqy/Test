#ifndef BARCODE_READER_H
#define BARCODE_READER_H

#include <string>
#include<iostream>
using namespace std;

struct product {
    string name;
    double price;
    int quantity;
};

class BarcodeReader {
public:
    string readBarcode();
    product findProductByBarcode(const string& barcode);
};

#endif
