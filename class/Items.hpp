#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include "Product.hpp"

#include <iostream>
using namespace std;

class Items{

    private:
        Product* product;      // Ponteiro para o produto cadastrado no menu
        int quantity;
        float priceTotalItems;

    public:
        Items(Product* product, int quantity,float priceTotalItems);

        void sumPriceTotal();
        float getPriceTotal();

        int getQuantity();
        void setQuantity(int newQuantity);

        Product* getProduct();
        void setProduct(Product* newProduct);
};

#endif