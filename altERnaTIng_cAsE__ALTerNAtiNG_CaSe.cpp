#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string to_alternating_case(const string& str)
{
	string answer;
	char temp;
	int str_length = str.length();
	for (int x = 0; x < str_length; x++){
		temp = str.at(x);
		char temp_2 = toupper(temp);
		if (temp == temp_2){
			temp = tolower(temp);
			answer += temp;
		}else{
			temp = toupper(temp);
			answer += temp;
		}
	}
	return answer;
}
int main (){
	string input = "hello world";
	string result = to_alternating_case(input);
	cout << result << endl;
}
