#ifndef ITEM_H
#define ITEM_H

class Item
{
public:
    Item(int attackIn, int defenseIn);
    ~Item();
    void modifyItem(int attackIn, int defenseIn);
private:
    int attack;
    int defense;
};

#endif // ITEM_H
