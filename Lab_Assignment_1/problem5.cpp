#include <iostream>

int main(){
	const int THREE_POINT = 3;
	const int TWO_POINT = 2;	
	int num_three_pointers = 0;
	int num_two_pointers = 0;	
	
	std::cout << "How many 3-pointers? ";
	std::cin >> num_three_pointers;
	
	std::cout << "How many 2-pointers? ";
	std::cin >> num_two_pointers;
	
	const int TOTAL_POINTS = (num_three_pointers * THREE_POINT)
				+ (num_two_pointers * TWO_POINT);

	std::cout << "Total points scored: " << TOTAL_POINTS << std::endl; 
	return 0;

}
