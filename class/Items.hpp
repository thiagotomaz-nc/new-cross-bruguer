#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include "Products.hpp"

#include <iostream>
using namespace std;

class Items{

    private:
        Products products;
        int quantity;
        float priceTotalItems;

    public:
        void sumPriceTotal();
        float getPriceTotal();

        int getQuantity();
        int setQuantity();
};

#endif