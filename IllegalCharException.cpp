#include "IllegalCharException.h"

IllegalCharException::IllegalCharException(char Char) {
    this->Char = Char;
}

char IllegalCharException::getChar() const {
    return Char;
}
