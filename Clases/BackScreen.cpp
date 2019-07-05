/** Marc Garrido Casas   -   05/07/19 */

#include "BackScreen.h"

BackScreen::BackScreen(int x, int y)
{
    std::cout << "Constructing BackScreen" << std::endl;

    sizeX_ = x;
    sizeY_ = y;

    std::vector<std::vector<char>> aux1(x, std::vector<char>(y));
    std::vector<std::vector<bool>> aux2(x, std::vector<bool>(y));

    for(int ii = 0; ii < x; ++ii) {
        for(int jj = 0; jj < y; ++jj) {
            aux1[ii][jj] = '.';
            aux2[ii][jj] = true;
        }
    }
    Matrix_ = aux1;
    MatrixCorrectPosition_ = aux2;

}

/**
 * Sets the new 'x' size.
 * @param x The new value of 'x' size.
 */
void BackScreen::setSizeX(int x)
{
    sizeX_ = x;
}

/**
 * Sets the new 'y' size.
 * @param y The new value of 'y' size.
 */
void BackScreen::setSizeY(int y)
{
    sizeY_ = y;
}

/** Returns the 'x' size of the map. */
int BackScreen::getSizeX() const
{
    return sizeX_;
}

/** Returns the 'y' size of the map. */
int BackScreen::getSizeY() const
{
    return sizeY_;
}

/**
 * Print the character Matrix, the game screen.
 * '.' Means an empty position.
 * '0' It has a snake body.
 * 'o' The head of the snake.
 * '*' An apple.
 */
void BackScreen::print() const
{
    std::cout << std::endl;
    for(int ii = 0; ii < sizeX_; ++ii) {
        for(int jj = 0; jj < sizeY_; ++jj) {
            std::cout << Matrix_[ii][jj];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

/** Print the positions where the snake is. */
void BackScreen::printCorrectPositions() const
{
    std::cout << std::endl;
    for(int ii = 0; ii < sizeX_; ++ii) {
        for(int jj = 0; jj < sizeY_; ++jj) {
            std::cout << MatrixCorrectPosition_[ii][jj];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

/**
 * Checks if that position there is no snake so it is valid to put an apple.
 * @param x position, must be < sizeX_.
 * @param y position, must be < sizeY_.
 * @return if in that position it has a snake on it.
 */
bool BackScreen::isThereAnyBody(int x, int y) const
{
    return MatrixCorrectPosition_[x][y];
}