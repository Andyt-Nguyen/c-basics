#include "Mother.h"
#include "Daughter.h"
#include <iostream>

using namespace std;

Daughter::Daughter() {
    cout << "Daughter constructor" << endl;        
}

Daughter::~Daughter() {
    cout << "Daughter deconstructor" << endl;
}