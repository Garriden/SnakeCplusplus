/** Marc Garrido Casas   -   07/07/19 */

#include "Body.h"

Body::Body()
{
    int aux = 0;
    it_ = body_.begin();
    while (aux++ < DEFAULT_BODY_SIZE_) {
        body_.insert(it_, 0);
    }
}

Body::Body(int size)
{
    int aux = 0;
    it_ = body_.begin();
    while (aux++ < size) {
        body_.insert(it_, 0);
    }
}

std::list<int> :: iterator Body::getHead()
{
    return body_.begin();
}

std::list<int> :: iterator Body::getTail()
{
    return body_.end();
}

void Body::incrementSize()
{
    body_.insert(it_, 0);
}