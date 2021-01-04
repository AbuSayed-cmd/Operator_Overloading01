#include <iostream>
#include "OVERLOADING.h"


int main( )
{
	OVERLOADING a {"Hello"};
    OVERLOADING b;                        //No Arguments Constructor
    a=b;                                             //copy Assignment
    b="There is an exercise";             //b.operator=("This is a Test")
	return 0;
}
