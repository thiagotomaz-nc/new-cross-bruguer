#include "Items.hpp"

Items::Items() {
    this->product = nullptr;
    this->quantity = 0;
    this->priceTotalItems = 0.0;
}

void Items::sumPriceTotal() {
    if (this->product != nullptr) {
        this->priceTotalItems = this->product->getUnitPrice() * this->quantity;
    } else {
        this->priceTotalItems = 0.0;
    }
}

float Items::getPriceTotal() {
    return this->priceTotalItems;
}

int Items::getQuantity() {
    return this->quantity;
}

void Items::setQuantity(int newQuantity) {
    this->quantity = newQuantity;
    this->sumPriceTotal();    // Recalcula o total ao alterar a quantidade
}

Products* Items::getProduct() {
    return this->product;
}

void Items::setProduct(Products* newProduct) {
    this->product = newProduct;
    this->sumPriceTotal();    // Recalcula o total ao alterar o produto
}