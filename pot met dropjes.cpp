#include <iostream>
#include <conio.h>
int main(){  
    int potDropjes = 20;
    int aantalGenomen;
    for (int i = 0; i < potDropjes;) {
        std::cout << "er zitten nog " << potDropjes << " dropjes in de pot" << std::endl;
        std::cout << "hoeveel dropjes neemt u? ";
        std::cin >> aantalGenomen;
        potDropjes -= aantalGenomen;
        system("CLS");}
    std::cout << "de pot is leeg.";}
