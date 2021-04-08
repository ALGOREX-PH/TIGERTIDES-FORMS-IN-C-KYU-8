#include <string>
#include <iostream>
using namespace std;
unsigned int strCount(std::string word, char letter){
  //your code here
  int word_length = word.length();
  int answer = 0;
  
  for(int x = 0 ; x < word_length; x++){
  	char temp = word.at(x);
  	
  	if (temp == letter){
  		answer++;
	  }
  }
return answer;
}

int main(){
	std::string input_string = "Hello";
	char input_char = 'o';
	unsigned int result = strCount(input_string, input_char);
	cout << result << endl;
}