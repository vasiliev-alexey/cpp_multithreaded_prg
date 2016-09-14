//
// Created by alexey on 14.09.16.
//

#include <iostream>
#include "StringPointer.cpp"
using namespace std;
int main() {

    std::string s1 = "Hello, world!";

    StringPointer sp1(&s1);
    StringPointer sp2(NULL);

    std::cout << sp1->length() << std::endl;
    std::cout << *sp1 << std::endl;
    std::cout << sp2->length() << std::endl;
    std::cout << *sp2 << std::endl;

    return 0;
}