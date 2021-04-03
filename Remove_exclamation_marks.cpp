#include <string>
#include <iostream>
using namespace std;

std::string removeExclamationMarks(std::string str){
  //your code here
   int str_length = str.length();
   string string_catcher;
   for (int x = 0; x < str_length; x++){
   	char str_letter = str.at(x);
   	
   	if (str_letter != '!'){
   		string_catcher += str_letter;
	   }
   }
   
   str = string_catcher;
   return str;
}

int main (){
	string word = "Hello World!!!";
	string answer = removeExclamationMarks(word);
	cout << answer << endl;
	
	
	
	
	
}
