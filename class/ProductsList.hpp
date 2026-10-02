#ifndef _PRODUCTS_LIST_HPP_
#define _PRODUCTS_LIST_HPP_

#include <string>
#include <iostream>
#include "Product.hpp"

using namespace std;

#define SIZE_DEFAULT 15

//lista simples, sem ser encadeada;
class ProductsList{

    private:
        Product * product;
        int size;
        int length;
        
        
    public:
        ProductsList(Product *product, int size = SIZE_DEFAULT);
        ProductsList( int size = SIZE_DEFAULT);
        void addProduct();
        void removeProduct();
        int getSize();
        void setSize(int newSize);
        int getLength();
        void setLength(int newLength);
        void setNext(ProductsList * next);
        ProductsList*  getNext();
        void showProducts();
        ~ProductsList();
};

#endif