#include "CheckBoard.h"
#include "IllegalException.h"

CheckBoard::CheckBoard(){
    this->piece = '.';
}

CheckBoard::CheckBoard(char Char){
    piece = Char;
}

void CheckBoard::operator= (char Char) {
    if (Char != '.' && Char != 'X' && Char != 'O')
        throw IllegalException(Char);
    piece = Char;
}

CheckBoard::operator char() const {
    return piece;
}

ostream& operator<< (ostream& os, const CheckBoard& piece) {
    os << piece.piece;
    return os;
}