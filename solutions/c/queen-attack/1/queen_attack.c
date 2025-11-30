#include "queen_attack.h"

uint8_t absolute(uint8_t x,uint8_t y)
{
    if (x>y)
        return x-y;
    else
        return y-x;
}
attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    uint8_t x1 = queen_1.row;
    uint8_t y1 = queen_1.column;

    uint8_t x2 = queen_2.row;
    uint8_t y2 = queen_2.column;

    if (x1==x2 && y1==y2)
        return INVALID_POSITION;
    if(x1>7 || x2>7 || y1>7 || y2>7)
        return INVALID_POSITION;
    uint8_t a = absolute(x1,x2);
    uint8_t b = absolute(y1,y2);
    if(a==0 || b==0 || a==b)
        return CAN_ATTACK;
    else
        return CAN_NOT_ATTACK;
}
