#include "Random.h"
bool Random::_seeded = 0;

int Random::nextInt()
{
    if (_seeded == 0)
    {
        _seeded = 1;
        srand(time(NULL));
    }
    return rand();
}

int Random::nextInt(int ceiling)
{
    if (_seeded == 0)
    {
        _seeded = 1;
        srand(time(NULL));
    }
    if (ceiling == 1)
        return 0;
    return rand() % (ceiling);
}

int Random::nextInt(int left, int right)
{
    if (left > right)
        swap(left, right);
    if (_seeded == 0)
    {
        _seeded = 1;
        srand(time(NULL));
    }
    return (rand() % (right-left+1)) + left;
}
