#include "IllegalException.h"

IllegalException::IllegalException(char Char) {
    this->Char = Char;
}

char IllegalException::getChar() const {
    return Char;
}


IllegalException::IllegalException(int x, int y) {
    this->x = x;
    this->y = y;
}

string IllegalException::getPoint() const {
    return to_string(x) + "," + to_string(y);
}