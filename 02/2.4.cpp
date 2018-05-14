#include <iostream>
#include <cmath>


int main(void){
    unsigned u, u2;
    u = 10;
    u2 = 42;
    std::cout << u - u2 << "\n" << std::endl;
    std::cout << u2 - u << "\n" << std::endl;


    int i = 10, i2 = 42;
    std::cout << i - u << "\n" << std::endl;

    std::cout << u - i << "\n" << std::endl;


    
    return 0;
}