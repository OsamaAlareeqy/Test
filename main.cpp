// main.cpp
#include <iostream>
#include "database.h"
#include "barcode_reader.h"
using namespace std;

void displayProducts() {
    // ???? ??? ???? ????? ???????? ?? ????? ????????
    
}

void sellProduct() {
    // ???? ??? ???? ???? ?????? ????? ????????
}

void printReceipt() {
    // ???? ??? ?????? ?????? ?????
}

int main() {
    // ??? ????? ???????? ????????
    int choice;
    while (true) {
        // ??? ????? ???????? ????????
        cout << "1. Add Product\n2. Edit Product\n3. Delete Product\n4. Display Products\n5. Sell Product\n6. Return Product\n7. View Reports\n8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Add Product
            break;
        case 2:
            // Edit Product
            break;
        case 3:
            // Delete Product
            break;
        case 4:
            displayProducts();
            break;
        case 5:
            sellProduct();
            break;
        case 6:
            // Return Product
            break;
        case 7:
            // View Reports
            break;
        case 8:
            // Exit
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    return 0;
}
