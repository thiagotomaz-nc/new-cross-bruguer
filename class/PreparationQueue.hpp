#ifndef _PREPARATION_QUEUE_HPP_
#define _PREPARATION_QUEUE_HPP_

#include "Order.hpp"

#define LENGTH_DEFAULT 10

class PreparationQueue
{
private:
    Order data;
    int size; //tamanho total da fila
    int length; // tamanho parcial da fila
    PreparationQueue* next;

public:
    PreparationQueue(int size=LENGTH_DEFAULT);

    ~preparationQueue();
};

preparationQueue::preparationQueue(/* args */)
{
}

preparationQueue::~preparationQueue()
{
}


#endif