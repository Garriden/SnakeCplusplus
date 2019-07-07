/** Marc Garrido Casas   -   07/07/19 */

#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H

#include "Body.h"
#include "BackScreen.h"
#include "Position.h"

class Snake : Body {
private:
    BackScreen Screen_;
    Body body_;

    Position head_;
    Position tail_;

public:
    Snake();

    Position getHeadPosition();


};


#endif //SNAKE_SNAKE_H
