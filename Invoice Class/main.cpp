//
//  main.cpp
//  Invoice Class
//
//  Created by Amanpreeet Sandhu on 2024-10-08.
//

#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {
    Invoice invoice1{"#1234", "Materials", 3, 2};
    
    cout << "Part Number: " << invoice1.getPartNumber() << endl;
    cout << "Part Description: " << invoice1.getDescription() << endl;
    cout << "Quantity: " << invoice1.getQuantityPurchased() << endl;
    cout << "Price per item: " << invoice1.getPrice() << endl;
    cout << "Invoice Amount: " << invoice1.getInvoiceAmount() << endl;
    
    // Test with negative values
    
    invoice1.setQuantityPurchased(-3);
    invoice1.setPrice(-10);
    invoice1.getInvoiceAmount();
    
    cout << "After setting values to negative: " << endl;
    cout << "Quantity: " << invoice1.getQuantityPurchased() << endl;
    cout << "Price per item: " << invoice1.getPrice() << endl;
    cout << "Invoice Amount: " << invoice1.getInvoiceAmount() << endl;
    
}
