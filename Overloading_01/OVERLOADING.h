#ifndef OVERLOADING_H
#define OVERLOADING_H
#include "OVERLOADING.h"

class OVERLOADING
{
private:
    char *str; //pointer to a char[] that holds a C-Style string
public:
    OVERLOADING();
    OVERLOADING(const char *s);
    OVERLOADING(const OVERLOADING &source);  //Copy Constructor
    ~OVERLOADING(); 
    
    OVERLOADING &operator =(const OVERLOADING &rhs);
    
    void print() const;
    int getLength() const;
    const char *getStr() const;
    

};

#endif // OVERLOADING_H
