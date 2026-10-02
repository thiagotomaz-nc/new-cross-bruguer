#include "ProductsList.hpp"

ProductsList::ProductsList(Product *product, int size = SIZE_DEFAULT){

}

ProductsList::ProductsList( int size = SIZE_DEFAULT){

}

void  ProductsList::addProduct(){}

void  ProductsList::removeProduct(){}

int  ProductsList::getSize(){
    return this->size;
}

void  ProductsList::setSize(int newSize){
    this->size = newSize;
}

int  ProductsList::getLength(){
    return this->length;
}

void  ProductsList::setLength(int newLength){
    this->length = newLength;
}

void  ProductsList::setNext(ProductsList * next){
    this->next = next;
}

ProductsList*   ProductsList::getNext(){
    return this->next;
}

void ProductsList::showProducts(){

    if (this->length > 0) {
        for (int i = 0; i<length;i++){

    }
    } else {
        cout<<"Nenhum produto cadastrado"<<endl;
    }
}

ProductsList::~ProductsList(){

}