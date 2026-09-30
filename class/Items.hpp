#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include "Products.hpp"

#include <iostream>
using namespace std;

class Items{

    private:
        Products* product;      // Ponteiro para o produto cadastrado no menu
        int quantity;
        float priceTotalItems;

    public:
        Items();

        void sumPriceTotal();
        float getPriceTotal();

        int getQuantity();
        void setQuantity(int newQuantity);

        Products* getProduct();
        void setProduct(Products* newProduct);
};

#endif