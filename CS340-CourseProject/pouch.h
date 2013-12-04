#ifndef POUCH_H
#define POUCH_H

#include <vector>
#include <iostream>
#include "item.h"

class Pouch
{
public:
    Pouch();
    void Pouch::addItem(Item itemIn);
    void Pouch::dropItem(int itemNum);
    void Pouch::equipItem(Item itemEquip);
    void Pouch::unequipItem(int itemNum);
    void Pouch::changeEquip(int itemNum1, int itemNum2);
private:
    vector<Item> items;
};

#endif // POUCH_H
