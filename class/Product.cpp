#include "Product.hpp"

Product::Product(int barCode, string description, double unitPrice){
    this-> barCode = barCode;
    this-> description =description;
    this->unitPrice = unitPrice;
}

Product::Product(){}

int Product::getBarCode(){
    return this->barCode;
}

void Product::setBarCode(int newBarCode){
    this->barCode = newBarCode;
}

string Product::getDescription(){
    return this->description;
}

void Product::setDescription(string newDescription){
    this->description = newDescription;
}

float Product::getUnitPrice(){
    return this->unitPrice;
}

void Product::setUnitPrice(double newUnitPrice){
    this->unitPrice = newUnitPrice;
}

  void Product::print(){
    cout<<"Detalhe do produto"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Descricao: "<<this->description<<endl;
    cout<<"Codigo: "<<this->barCode<<endl;
    cout<<"Valor Unitario: "<<this->unitPrice<<endl;
    cout<<endl;
  }