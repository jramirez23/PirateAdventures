#include "pouch.h"


Pouch::Pouch()
{

}

void Pouch::addItem(Item itemIn)
{
    items.push_back(itemIn);
}

void Pouch::dropItem(int itemNum)
{
    /* no longer display in menu */
    /* delete a specific */
    /* set item[itemNum] -> point) */
    item[itemNum].~Item();
}

void Pouch::equipItem(Item itemEquip)
{
    /* add to hero stats */
    items.push_back(itemEquip);
}

void Pouch::unequipItem(int itemNum)
{
   /* equip this item */
   /* remove stats from here */
    items.erase(items.begin() + itemNUm);//remove from pouch
}

void Pouch::changeEquip(int itemNum1, int itemNum2)
{
    /*change from item 1 to item 2 */
    /* remove stats from item 2 */
    /* add stats from item 1 */
}
