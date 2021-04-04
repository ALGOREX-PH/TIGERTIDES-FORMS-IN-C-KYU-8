#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
std::vector<int> digitize(unsigned long n) 
{
std::vector<int> answer;
string number;        
stringstream me;
me << n;
me >> number;
int number_length = number.length() - 1;

for (int x = number_length; x >= 0; x--){
	int temp = 0;
	char digit = number.at(x);
	stringstream me_2;
	me_2 << digit;
	me_2 >> temp;
	answer.push_back(temp);
}
return answer;
}

int main () {
unsigned long long numbers = 348597;
std::vector<int> result = digitize(numbers);

for (int y = 0; y < result.size(); y++){
	cout << result[y] << endl;
}
}
