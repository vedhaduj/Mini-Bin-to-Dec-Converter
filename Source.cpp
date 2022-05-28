	#include <iostream>
  
  int main()
  {
  int input[50] = {};
	std::cout << "First binary digit: \n";
	std::cin >> input[0];

	std::cout << "Second binary digit: \n";
	std::cin >> input[1];

	std::cout << "Third binary digit: \n";
	std::cin >> input[2];

	std::cout << "Fourth binary digit: \n";
	std::cin >> input[3];


	//int power1 = 3;
	int power2 = 2;
	//int power3 = 1; 
	int power4 = 0;

	int zero = pow(power2, power4);

	std::cout << (input[0] * 2 * 2 * 2) + (input[1] * 2 * 2 ) + (input[2] * 2 * 1) + (input[3] * zero);
}
	
