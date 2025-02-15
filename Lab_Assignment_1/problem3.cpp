#include <iostream> 

int main(){

	int user_number = 0;
	int reverse_user_number =0;

	std::cout << "Please, enter an interger number: ";
	std::cin >> user_number;
	while(user_number!=0){
		reverse_user_number = reverse_user_number*10 + user_number%10;	
		user_number= user_number / 10;
	}
	std::cout << "The reverse number is " << reverse_user_number << std::endl;	
	return 0;
}
