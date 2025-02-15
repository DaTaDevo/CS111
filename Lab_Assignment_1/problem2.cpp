#include <iostream>

int main(){
	
	const double paper_width = 8.5;
	const double paper_height = 11;
	
	std::cout << "The area of a letter-size paper is " 
	<< paper_width*paper_height << std::endl;

	
	std::cout << "The perimeter of a letter-size paper is "
	 << 2*paper_width + 2*paper_height << std::endl;

	return 0;
}
