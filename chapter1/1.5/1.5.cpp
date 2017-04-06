#include <iostream>

int main(void){
	int num1, num2;

	std::cout << "input two number";
	std::cout  << std::endl;
	
	std::cin >> num1;
	std::cin  >> num2;

	std::cout << num1;
	std::cout << " * ";
	std::cout << num2;
	std::cout << " = ";
	std::cout << num1*num2;
	std::cout << std::endl;
	
	return 0;
}
