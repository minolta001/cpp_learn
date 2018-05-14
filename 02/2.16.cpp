#include <iostream>

/*int i = 0, &r1 = i; double d = 0, &r2 = d; 
(a) r2 = 3.14159;
(b) r2 = r1;
(c) i = r2;
(d) r1 = d; */

/*(a) valid, print 3.14159

(b) valid, print 0;

(c) valid, but the value will be rounded up
    print 0, or print 3?

(d) vaild, 0

*/

int main(void){
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14;
    
    std::cout << "r2: " << r2 << std::endl;

    r2 = r1;
    std::cout << r2 << std::endl;
    
    i = r2;
    std::cout << i << std::endl;

    return 0;

}