#include "reservoir.h"
#include <iostream>

int main()
{
    Reservoir obj1("Asd", 10, 151, 40);
    Reservoir obj2("Hgfdsfg", 80, 101, 13);

    std::cout << "Area: " << obj1.find_area() << std::endl;
    std::cout << "Volume: " << obj1.find_volume() << std::endl;
    

    return 0;
}