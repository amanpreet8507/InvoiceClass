//
//  Invoice.h
//  Invoice Class
//
//  Created by Amanpreeet Sandhu on 2024-10-08.
//
#include <string>

class Invoice {
public:
    // Invoice constructor with four parameters
    explicit Invoice(std::string partNum, std::string des, int quantity, int price): partNumber{partNum}, description{des} { // assign partNum & des to data members part number and description respectively
        
        // validate that the quantityPurchased & pricePerItem is greater than 0;
        // if not, data members quantityPurchased & pricePerItem keeps its default initial value of 0
        if (quantity > 0){ // if the quantityPurchased is valid
            quantityPurchased = quantity ; // assign it to data member;
        }
        if(price > 0){ // if the pricePerItem is valid
            pricePerItem = price  ; // assign it to data member
        }
    }

    // function that sets the partNumber
    void setPartNumber(std::string partNum){
        partNumber = partNum;
    }
    // function that returns the partNumber
    std::string getPartNumber() const {
        return partNumber;
    }
    // function that sets the description
    void setDescripton(std::string des){
        description = des;
    }
    // function that returns the description
    std::string getDescription() const {
        return description;
    }
    // function that sets the quantity
    void setQuantityPurchased(int quantity){
        if(quantity > 0){
            quantityPurchased = quantity;
        } else {
            quantityPurchased = 0;
        }
    }
    // function that returns the quantity
    int getQuantityPurchased() const {
        return quantityPurchased;
    }
    
    //function that sets the price
    void setPrice(int price){
        if(price > 0){
            pricePerItem = price;
        } else {
            pricePerItem = 0;
        }
    }
    
    // function that returns the price
    int getPrice() const {
        return pricePerItem;
    }
    
    // member function to calculate the invoice amount
    int getInvoiceAmount() const {
        return quantityPurchased * pricePerItem;
    }
    
private:
    std::string partNumber;
    std::string description;
    int quantityPurchased;
    int pricePerItem;
}; // end class Invoice
