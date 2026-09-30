#ifndef _PRODUCTS_HPP_
#define _PRODUCTS_HPP_

#include <string>
#include <iostream>
using namespace std;

class Products{

    private:
        int barCode;
        string description;
        float unitPrice;

    public:
        Products();
        
        int getBarCode();
        string getDescription();
        float getUnitPrice();
        
        void setDescription(string newDescription);
        void setBarCode(int newBarCode);
        void setUnitPrice(float newUnitPrice);
};

#endif