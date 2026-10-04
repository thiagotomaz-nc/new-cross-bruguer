#ifndef _PREPARATION_QUEUE_HPP_
#define _PREPARATION_QUEUE_HPP_

#include "Order.hpp"

#define SIZE_DEFAULT 10

class PreparationQueue
{
private:
    Order data;
    int size; //tamanho total da fila
    int length; // tamanho parcial da fila
    PreparationQueue* next;

public:
    PreparationQueue(int size=SIZE_DEFAULT);
    void enqueue(Order order); // ponteiro ou não
    void dequeue();
    int isEmpty();
    Order peek();
    void setSize(int newSize);
    int getSize();
    int getLength();
    int setLength(int newLength);

    ~PreparationQueue();
};

#endif