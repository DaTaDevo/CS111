#include <iostream>
#include <string>

int main(){

	std::string user_name = "";
	int user_height_inches  = 0; 
	const double CM_IN_INCH = 2.54;

	std::cout<<"Please, enter your name: ";
	std::cin >> user_name;

	std::cout<<"Please, enter your height(inch): ";
	std::cin >> user_height_inches;

	//converting into centimeters;
	double user_height_cm = user_height_inches * CM_IN_INCH;

	//displaying the final result
	std::cout << "Hi " << user_name << ". " << "You're " << user_height_cm << " centimeters tall." << std::endl;

	return 0;
}
