#include "cow.h"



//constructor
cow::cow (std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
//getters                   
std::string cow::get_name() const{
    return name;
}
int cow::get_age() const{
    return age;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
//setters
void cow::set_age(int new_age){
    age = new_age;
}