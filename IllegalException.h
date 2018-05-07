
#ifndef ILLEGALEXCEPTION_HPP
#define ILLEGALEXCEPTION_HPP


#include <iostream>
#include <exception>
#include <string>

using namespace std;

class IllegalException : public exception {

    public:
    
        IllegalException(char Char);
        char getChar() const;
         IllegalException(int x, int y);
        string getPoint() const;

    protected:

    private:

        int x , y;
        char Char;
};

#endif 
