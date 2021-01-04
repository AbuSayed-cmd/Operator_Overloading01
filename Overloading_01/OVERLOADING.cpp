#include "OVERLOADING.h"
#include <iostream>
#include <cstring>

OVERLOADING::OVERLOADING()
                          :str{nullptr}{
    str=new char[1];
    *str='\0';
}

//overloaded constructor
OVERLOADING::OVERLOADING(const char *s)
                          : str{nullptr}{
    if(s==nullptr){
        str==new char [1];
        *str ='\0';
    } else
        str=new char [std:: strlen(s) +1];
        std:: strcpy(str,s);
}

//Copy Constructor
OVERLOADING::OVERLOADING(const OVERLOADING &source)
                          : str {nullptr}{
    str= new char[std:: strlen(source.str) + 1];
    std:: strcpy(str, source.str);
}

OVERLOADING::~OVERLOADING()
{ 
    delete [] str;
}
//Copy Assignment
OVERLOADING &OVERLOADING::operator =(const OVERLOADING &rhs){
    std::cout<<"The Copy Assignment"<<std::endl;
    if(this == &rhs)
        return *this;
        delete [] this->str;
        str=new char[std::strlen(rhs.str) +1];
        std::strcpy(this->str, rhs.str);
        return *this;
}
//Display Method
void OVERLOADING::print() const{
    std::cout<<str<<" : "<<getLength()<<std::endl;
}
//getters
int OVERLOADING::getLength()const{
    return strlen(str);
}
const char *OVERLOADING::getStr()const{
    return str;
}
