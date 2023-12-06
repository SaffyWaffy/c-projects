// worstenbroodjes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

int main()
{
    std::cout << "hoeveel studenten zijn er? ";
    int aantalStudenten;
    int total = 0;
    std::cin >> aantalStudenten;
    int worstenbroodjes;

    for (int i=0; i < aantalStudenten; i++) {
        system("CLS");
        std::cout << "student hoeveel worstenbroodjes heeft u gehaald? ";
        std::cin >> worstenbroodjes;
        total += worstenbroodjes;
    };
    std::cout <<"het totaal aantal worstenbroodjes: " << total << std::endl;
    std::cout <<"het gemideld aantal worstenbroodjes per student: " << total / aantalStudenten;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
