#include <iostream>

int main(void){
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;

    //print 10

    return 0;
}