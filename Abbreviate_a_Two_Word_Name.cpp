#include <iostream>
#include <string>
#include <cctype>
using namespace std;
std::string abbrevName(std::string name)
{
	std::string answer;
  int name_length = name.length();
  for (int x = 0; x < name_length; x++){
  	char temp = name.at(x);
  	if (x == 0){
  		temp = toupper(temp);
  		answer += temp;
  		answer += ".";
	  }
	  
	if (temp == ' '){
		temp = name.at(x + 1);
		temp = toupper(temp);
		answer += temp;
	}
  }
  return answer;
}
int main (){
	std::string input = "Sam Harris";
	std::string result = abbrevName(input);
	cout << result << endl;
}