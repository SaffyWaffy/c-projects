// stringsTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
int main()
{
    std::string hobbys[5];
    for (int i = 0; i < 5; i++) {
        system("CLS");
        std::cout << "vul hier uw hobby in: ";
        std::cin >> hobbys[i];
    }
    std::cout << "alle hobbys zijn: ";
    for (int i = 0; i < 5; i++) {
       
        std::cout<< hobbys[i]<<" "  ;
    }
}
