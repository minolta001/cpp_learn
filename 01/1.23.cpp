#include <iostream>
#include "Sales_item.h"

int main(void){
    Sales_item staItem, curItem;
    int num;

    while(std::cin >> staItem){
        num = 1;
        while(std::cin >> curItem){
            if(staItem.isbn() == curItem.isbn()){
                ++num;
            }
            else{
                std::cout << staItem.isbn() << " Occurs: " << num << std::endl;
                staItem = curItem;
                num = 1;
            }
        }
        std::cout << staItem.isbn() << " Occurs: " << num << std::endl;
    }

    return 0;
}