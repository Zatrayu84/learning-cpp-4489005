// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){

    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 4, cow_purpose::pet));
    cattle.push_back(cow("Shiela", 2, cow_purpose::dairy));
    
    std::cout << "  The first cow is " << cattle.begin()->get_name() << std::endl; // standard to pull first element
    std::cout << "  The second cow is " << cattle[1].get_name() << std::endl; // standard to pull info by index
    std::cout << "  The next to last cow is " << prev(cattle.end(), 2)->get_name() << std::endl; // prev command used to pull previous element from end of vector.
    std::cout << "  The last cow is " << (cattle.end() - 1)->get_name() << std::endl; // this is to grab the last cow, must subtract one to get data, .end pulls last item past end of vector

    std::cout << std::endl << std::endl;
    return (0);
}
