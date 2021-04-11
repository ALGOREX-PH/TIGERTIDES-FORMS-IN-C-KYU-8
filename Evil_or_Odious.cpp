#include <iostream>
#include <string>
#include <sstream>
using namespace std;

std::string evil(int n)
{
	std::string binary_string;
	int remainder = 0;
	int number_of_ones = 0;
	while (n > 0){
		char temp;
		remainder = n % 2;
		stringstream me;
		me << remainder;
		me >> temp;
	    binary_string += temp;
	    n = n / 2;
	    remainder = 0;
	}
    std::string temp_string;
    int binary_string_length = binary_string.length();
    for (int x = binary_string_length - 1; x >= 0; x--){
    	char temp_2 = binary_string.at(x);
    	temp_string += temp_2;
	}
	binary_string = temp_string;
	
	for (int count_the_ones = 0; count_the_ones < binary_string_length; count_the_ones++){
		char temp_3 = binary_string.at(count_the_ones);
		
		if (temp_3 == '1'){
			number_of_ones++;
		}
	}
	std::string answer;
	
	if (number_of_ones % 2 == 0){
		answer = "It's Evil!";
	}else {
		answer = "It's Odious!";
	}
	
  return answer;
}
int main (){
	int input = 50;
	std::string result = evil(input);
	cout << result << endl;
}