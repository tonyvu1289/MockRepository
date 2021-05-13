#include "Dice.h"
int Dice::roll()
{
    Random rd;
    return rd.nextInt(1,6);
}
