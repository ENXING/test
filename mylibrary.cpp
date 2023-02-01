// mylibrary.cpp (implementation file)
#include "mylibrary.h"
//#include "mylibrary_private.h"

MyLibrary::MyLibrary() {
    internal_data = 0;
}

int MyLibrary::add(int a, int b) {
    return a + b;
}

int MyLibrary::multiply(int a, int b) {
    return a * b;
}

