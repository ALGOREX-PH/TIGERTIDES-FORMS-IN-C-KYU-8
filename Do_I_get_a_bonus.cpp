#include<string>
#include<iostream>
#include <sstream>
using namespace std;

string bonus_time(int salary, bool bonus)
{
	string answer;
	int new_salary = salary;
	
    if (bonus == true){
    	new_salary *= 10;
	}
	stringstream me;
	me << new_salary;
	me >> answer;
	answer = "$" + answer;
	return answer;
	
}

int main(){
	
	int input_salary = 10000;
	bool i_have_bonus = true;
	string result = bonus_time(input_salary, i_have_bonus);
	cout << result << endl;

}