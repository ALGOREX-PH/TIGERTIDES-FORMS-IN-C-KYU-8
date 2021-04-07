#include <string>
#include <sstream>
#include <iostream>
using namespace std;
std::string multi_table(int number)
{
	string answer;
 for (int x = 1; x <= 10; x++)
 {
 	int multiply = number * x;
 	string catcher;
 	stringstream me;
 	me << x;
	me >> catcher;
	answer += catcher;
	string mult = " * ";
	answer += mult;
	string catcher_2;
	stringstream me_2;
	me_2 << number;
	me_2 >> catcher_2;
	answer += catcher_2;
	answer += " = ";
	string catcher_3;
	stringstream me_3;
	me_3 << multiply;
	me_3 >> catcher_3;
	if (x == 10){
		answer += catcher_3;
	}else{
	
	answer += catcher_3 + "\n";
}
 }
    return answer; // good luck
}

int main (){
	int input = 5;
	std::string result = multi_table(input);
	cout << result << endl;
}