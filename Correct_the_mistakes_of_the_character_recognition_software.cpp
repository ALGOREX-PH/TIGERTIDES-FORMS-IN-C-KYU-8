#include <string>
#include <iostream>
using namespace std;
std::string correct(std::string str){
  //your code here
  int str_length = str.length();
  string answer;
  
  for (int x = 0; x < str_length; x++){
  	char temp = str.at(x);
  	
  	if (temp == '5'){
  		answer += 'S';
	  }else 
	  
	  if (temp == '0'){
	  	answer += 'O';
	  }else
	  
	  if (temp == '1'){
	  	answer += 'I';
	  }
	  else{
	  	answer += temp;
	  }
  }
  return answer;
}
int main (){
	std::string input = "501";
	std::string result = correct(input);
	cout << result << endl;
}