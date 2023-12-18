// Header guard to prevent multiple inclusions
#include <iostream>
#ifndef HEADER_H
#define HEADER_H

// Function declaration
void sayHello(const char* name) {

    std::cout << "Name is: " << name;

};

// Type definition
struct Person {
    std::string name;
    int age;
};

#endif // HEADER_H