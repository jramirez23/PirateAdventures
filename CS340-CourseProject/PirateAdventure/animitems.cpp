#include "animitems.h"

animItems::animItems()
{
    /*hits={
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };*/
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hits[i][j]=0;
        }
    }

}
void animItems::reset(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hits[i][j]=0;
        }
    }
}
int animItems::getHit(int i, int j){
    return hits[i][j];
}
void animItems::setHit(int i, int j, int val){
    hits[j][i]=val;
}
