#include <iostream>

#include "mul.hpp"
#include "sum.hpp"

int main(){
    int a = sum(1 , 2);
    int b = mul(2 , 3);

    std::cout<< "a =" << a << "\n";
    std::cout<< "b =" << b << "\n";

    return 0;
}
