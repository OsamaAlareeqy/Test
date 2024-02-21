#include "barcode_reader.h"
#include <iostream>
using namespace std;

string BarcodeReader::readBarcode() {
    string barcode;
    cout << "Scan barcode: ";
    cin >> barcode;
    return barcode;
}

 product BarcodeReader::findProductByBarcode(const string& barcode) {
    product temp;
    temp.name = "Product1";
    temp.price = 10.0;
    temp.quantity = 1;
    return temp;
}
