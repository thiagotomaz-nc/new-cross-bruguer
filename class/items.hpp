#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include <iostream>
using namespace std;

class Items{

    private:
        products products;
        int quantity;
        float priceTotalItems;

    public:
        void sumPriceTotal();
        float getPriceTotal();

        int getQuantity();
        int setQuantity();
};

#endif