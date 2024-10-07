#include <iostream>

#include "second_lib/mul.hpp"
#include "first_lib/sum.hpp"

int main(){
    int a = sum(1 , 2);
    int b = mul(2 , 3);
    printf("a =%d", a);
     printf("b =%d", b);
    return 0;
}