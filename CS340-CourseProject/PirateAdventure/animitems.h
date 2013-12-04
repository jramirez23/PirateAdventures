#ifndef ANIMITEMS_H
#define ANIMITEMS_H

class animItems
{
private:
    int hits[3][3];
public:
    animItems();
    void reset();
    int getHit(int i, int j);
    void setHit(int i, int j, int val);
};

#endif // ANIMITEMS_H
