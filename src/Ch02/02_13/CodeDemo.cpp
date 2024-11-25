// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    // Write your code here - my way - I had to cast float due to integers being used to add and divide
    //result = ((float)(nums[0] + nums[1] + nums[2] + nums[3] + nums[4]) / 5);
    
    //Video Answer - no type casting needed because all gets stored in result which is already a float type
    result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    result /= 5;

    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
