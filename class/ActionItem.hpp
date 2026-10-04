#ifndef _ActionItem_HPP_
#define _ActionItem_HPP_
                            //açãoItem é uma classe intermediário que vai ser organizada pelo ActionStack

#include "Items.hpp"

#include <iostream>
using namespace std;

class ActionItem{

    private:
        int typeOperation;
        Items *affectedItem;        
    public:
        string getTypeOperation();
        void setTypeOperation(string);

        Items * getAffectedItems();
        void setAffectedItem(Items*);

        int getPreviousQuantity();
        void setPreviousQuantity(int quantity);
};

#endif