#include <string>
#include <iostream>
#include <cctype>
using namespace std;
bool isPalindrom (const std::string& str)
{
	bool answer = false;
	
	string reverse;
	string str_2;
	int str_length = str.length();
	 for (int nocase = 0; nocase < str_length; nocase++){
	 char temp_1 = str.at(nocase);
	 temp_1 = tolower(temp_1);
	 str_2 += temp_1;	
	 }
	 
	for (int x = str_length - 1; x >= 0; x--){
		char temp_2 = str_2.at(x);
		reverse += temp_2;
	}
	cout << reverse << endl;
	
	if (reverse == str_2){
		answer = true;
	}
  return answer;
}
int main (){
	std::string input = "Abba";
	bool result = isPalindrom(input);
	cout << result << endl;
}