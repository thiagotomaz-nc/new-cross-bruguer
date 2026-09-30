#include "Products.hpp"

Products::Products(){
    this->barCode = 0;
    this->description = "";
    this->unitPrice = 0.0;
}

int Products::getBarCode(){
    return this->barCode;
}

void Products::setBarCode(int newBarCode){
    this->barCode = newBarCode;
}

string Products::getDescription(){
    return this->description;
}

void Products::setDescription(string newDescription){
    this->description = newDescription;
}

float Products::getUnitPrice(){
    return this->unitPrice;
}

void Products::setUnitPrice(float newUnitPrice){
    this->unitPrice = newUnitPrice;
}