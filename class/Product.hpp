#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_

#include <string>
#include <iostream>
using namespace std;

class Product{

    private:
        int barCode;
        string description;
        double unitPrice;

    public:
        Product(int barCode, string description, double unitPrice);
        Product();

        int getBarCode();
        string getDescription();
        float getUnitPrice();
        
        void setDescription(string newDescription);
        void setBarCode(int newBarCode);
        void setUnitPrice(double newUnitPrice);

        void print();
        //~Product();

};

#endif