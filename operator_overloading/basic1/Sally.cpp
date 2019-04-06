#include <iostream>
#include "Sally.h"

Sally::Sally() {}

Sally::Sally(int a) {
    num = a;
}

Sally Sally::operator+(Sally aso) {
    Sally brandNew;

    // num = the current object
    // the object that is going to be added
    // num = a 
    // aso.num = b
    
    brandNew.num = num + aso.num;
    return brandNew;
}

Sally Sally::operator/(Sally aso) {
    Sally brandNew;
    brandNew.num = num / aso.num;
    return brandNew;
}