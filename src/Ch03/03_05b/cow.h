#pragma once

#ifndef COW_H
#define COW_H
#include <string>

#endif // COW_H

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:   
//constructor
    cow (std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);

    //commented out below code to follow along with video
    //void set_name(std::string new_name);
    //void set_purpose(cow_purpose new_purpose);   
    
private:
    std::string name;
    int age;
    cow_purpose purpose;
};