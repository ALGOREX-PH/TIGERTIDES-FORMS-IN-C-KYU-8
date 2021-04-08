#include <string>
#include <iostream>
using namespace std; 

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
  int str_length = str.length();
  string answer;
  
  for (int x = 0; x < str_length; x++){
  	char letter = str.at(x);
  	if(x != 0 && x != str_length-1){
  	answer += letter;
	}
  }
  return answer; 
}
int main(){
	string input = "tuna";
	string result = sliceString(input);
	cout << result << endl;
}