#include "item.h"

Item::Item(int attackIN, int defenseIn)
{
    attack = attackIN;
    defense = defenseIN;
}

Item::~Item()
{
    delete[] attack;
    delete[] defense;
}

void Item::modifyItem(int incAttack, int incDefense)
{
    attack += incAttack;
    defense += incDefense;
}
