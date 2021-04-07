#include <string>
#include <iostream>
using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  string answer;
  char letter;
  int string_length = str.length();
  
  for (int x = 0; x < string_length; x++){
  	int g = x+1;
  	letter = str.at(string_length -g);
  	answer += letter;
  }
  return answer;
}

int main (){
	string input = "world";
	string result = reverseString(input);
	cout << result << endl;
}