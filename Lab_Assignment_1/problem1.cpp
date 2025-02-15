#include <iostream>

int main(){
	//initializing variables
	int x = 0;
	int y = 0;
	
	//receiving user input for values
	std::cout << "Enter a value for x: ";
	std::cin >> x;

	std::cout << "Enter a value for y: ";
	std::cin >> y;

	//manipulating user input
	std::cout << "The sum of " << x << " and " << y << " is " << x+y << std::endl;
	std::cout << y  <<  " subtracted from " << x << " is " << x-y << std::endl;
	std::cout << "The product of " << x << " and " << y << " is " << x*y << std::endl; 
	std::cout << "The average of " << x << " and " << y << " is " << double(x+y)/2 << std::endl; 
	std::cout << "The reminder when " << x << " divided by " <<  y << " is " << x%y << std::endl; 

	return 0;
}
