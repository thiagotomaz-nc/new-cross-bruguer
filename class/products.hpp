#ifndef _PRODUCTS_HPP_
#define _PRODUCTS_HPP_

#include <iostream>
using namespace std;

class Products{

    private:
        int barCode;
        string description;
        float unitPrice;

    public:
        int getBarCode();
        int setBarCode();

        string getDescription();
        string setDescription();

        float getUnitPrice();
        float setUnitPrice();






};















#endif