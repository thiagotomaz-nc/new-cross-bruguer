#ifndef _ORDER_HPP_
#define _ORDER_HPP_

#include <string>

using namespace std;

class Order
{
private:
    int number;
    int numberTable;
    string nomeCliente;
    // Itens itens[];
    double priceTotal = 0;
    int statusOrder;
 


public:

    Order();
    void addItem();
    void removeItem();
    void sumPriceTotal();
    void updatePriceTotal(double piceitem, int typeOperationAddSubtract);
    double getPriceTotal();
    ~Order();
};

#endif