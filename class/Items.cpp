#include "Items.hpp"

Items::Items(Product* product, int quantity,float priceTotalItems) {
    this->product = product;
    this->quantity = quantity;
    this->priceTotalItems = priceTotalItems;
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

Product* Items::getProduct() {
    return this->product;
}

void Items::setProduct(Product* newProduct) {
    this->product = newProduct;
    this->sumPriceTotal();    // Recalcula o total ao alterar o produto
}