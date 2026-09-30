#ifndef _KITCHEN_HPP_
#define _KITCHEN_HPP_

#include "PreparationQueue.hpp"

class Kitchen
{
private:
   PreparationQueue *preparationQueue;
public:
    Kitchen(/* args */);
    void callOrder();
    void startPreration();
    void finishPreparation();
    ~Kitchen();
};

Kitchen::Kitchen(/* args */)
{
}

Kitchen::~Kitchen()
{
}



#endif