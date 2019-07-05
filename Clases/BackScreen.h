/** Marc Garrido Casas   -   05/07/19 */

#ifndef SNAKE_BACKSCREEN_H
#define SNAKE_BACKSCREEN_H

#include <iostream>
#include <vector>

class BackScreen {
private:
    int sizeX_;
    int sizeY_;
    std::vector<std::vector<char>> Matrix_;
    std::vector<std::vector<bool>> MatrixCorrectPosition_;

public:

    BackScreen(int sizeX, int sizeY);

    void setSizeX(int x);
    void setSizeY(int y);

    int getSizeX() const;
    int getSizeY() const;

    void print() const;
    void printCorrectPositions() const;
    bool isThereAnyBody(int x, int y) const;

};


#endif //SNAKE_BACKSCREEN_H
