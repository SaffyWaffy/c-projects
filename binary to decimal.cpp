#include <iostream>
#include <cmath>

//dit is de functie die de binary omrekent naar decimaal 
	int calc(int d) {

		int binaryNumber;
		binaryNumber = d;
		int number = binaryNumber;
		int calculation = number;
		int value_decimal = 0;
		int start = 1;


		while (calculation) {
			int previous = calculation % 10;
			calculation = calculation / 10;
			value_decimal += previous * start;

			start = start * 2;
		}
		return value_decimal;
	}

int main() {
	int binary;
	std::cout << "vul hier aub uw binair nummer in: ";
	std::cin >> binary;
	int d = binary;
	std::cout << "uw decimaal nummer is: ";
	std::cout << calc(d);



}