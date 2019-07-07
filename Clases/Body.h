/** Marc Garrido Casas   -   07/07/19 */

#ifndef SNAKE_BODY_H
#define SNAKE_BODY_H

#include <iostream>
#include <list>

class Body {
private:
    const int DEFAULT_BODY_SIZE_ = 3;
    std::list<int> :: iterator it_;

public:
    std::list<int> body_;

    Body();
    explicit Body(int size);

    std::list<int> :: iterator getHead();
    std::list<int> :: iterator getTail();

    void incrementSize();
};


#endif //SNAKE_BODY_H
