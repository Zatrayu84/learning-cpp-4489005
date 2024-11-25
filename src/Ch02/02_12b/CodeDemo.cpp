// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet}; // numbering starts at [0, 1, 2, 3]
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // numbering starts at [0,1,2,3,4,5,6)

int main(){
    int meat = 8;
    cow_purpose a;

    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl; // insertion is not defined for operands of cow_purpose

    std::cout << std::endl << std::endl;
    return (0);
}
