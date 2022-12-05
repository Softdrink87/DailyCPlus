#include <iostream>

int& returnReference(int a) {
    //int& a = c;
    int& b = a;
    return b; 
}

int main() {
    int c = 10;
    int& d = returnReference(c);
    return d;
}