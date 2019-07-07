/** Marc Garrido Casas   -   07/07/19 */

#include "Snake.h"

Snake::Snake() : Screen_(10,10)
{
    head_.position.first = Screen_.getSizeX() / 2;
    head_.position.second = Screen_.getSizeX() / 2;
}

Position Snake::getHeadPosition()
{
    return head_;
}
