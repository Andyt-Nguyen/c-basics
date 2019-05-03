#include <iostream>
#include "Mother.h"
#include "Daughter.h"

void Daughter::doSomething() {
    // all inheriting from the mother class
    publicv = 1; 
    protectedv = 1; 

    // we cannot access the private variable
    //privatev = 1;
}