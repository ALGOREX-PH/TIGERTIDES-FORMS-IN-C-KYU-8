#include <iostream>
using namespace std;
int centuryFromYear(int year) 
{
	int century = 1;
	int x;
	year -= 100; 
	for (; year >= 100;){
		year -= 100;
		century++;
	}
	
	if (year % 100 >= 1){
		century++;
	}
	
	int answer =  century;
return answer;
}
int main(){
	int input_year = 1705;
	int result = centuryFromYear(input_year);
	cout << result << endl;
}