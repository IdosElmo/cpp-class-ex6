

#ifndef CHECKBOARD_H
#define CHECKBOARD_H

#include <iostream>

// This allow to use the class CheckBoard in the class Board and
// use the class Board in the class CheckBoard too.

#include "IllegalCharException.h"
#include "IllegalCoordinateException.h"

using namespace std;

/**
 * \brief This class fulfill the Board.
 * \author Johann and Samuel.
 */
class CheckBoard {

    public:

        //Constructor.
        
        CheckBoard();
        
        CheckBoard(char Char);

        //Operator

        void operator= (char Char);

        operator char() const;
    
        void setP(char Char);

        
    protected:

    private:

        //Variables of the object.
        char piece;
        
        friend ostream& operator<< (ostream& os, const CheckBoard& piece);
};

#endif
