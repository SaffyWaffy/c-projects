// awesome program 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    int worstBroodje;
    int worstBroodje1;
    int worstBroodje2;
    int worstBroodje3;
    int worstBroodje4;

    std::cout << "student 1 hoeveel wostenbroodjes heb jij gehaald? "; std::cin >> worstBroodje;
    std::cout << "student 2 hoeveel wostenbroodjes heb jij gehaald? "; std::cin >> worstBroodje1;
    std::cout << "student 3 hoeveel wostenbroodjes heb jij gehaald? "; std::cin >> worstBroodje2;
    std::cout << "student 4 hoeveel wostenbroodjes heb jij gehaald? "; std::cin >> worstBroodje3;
    std::cout << "student 5 hoeveel wostenbroodjes heb jij gehaald? "; std::cin >> worstBroodje4;
    int numberCalculator = worstBroodje + worstBroodje1 + worstBroodje2 + worstBroodje3 + worstBroodje4;
    std::cout << "dit is het totaal aantal worstenbroodjes van de 5 studenten: "<< numberCalculator<<std::endl;
    int gemideldWorstBroodje = numberCalculator / 5;
    std::cout << "dat is gemideld " << gemideldWorstBroodje << " worstenbroodjes per student";







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
