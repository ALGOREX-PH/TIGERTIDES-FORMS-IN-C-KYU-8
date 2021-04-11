#include <iostream>
#include <string>
#include <sstream>
using namespace std;


std::string fakeBin(std::string str){
  //your code here
  std::string answer;
  int str_length = str.length();
  for (int x = 0; x < str_length; x++){
  	int temp_1 = 0;
  	char temp_2 =  str.at(x);
  	stringstream me;
  	me << temp_2;
  	me >> temp_1;
  	
  	if (temp_1 < 5){
  		answer += '0';
	  }else{
	  	answer += '1';
	  }
  }
  return answer;
}
int main (){
	std::string input = "509321967506747";
	std::string result = fakeBin(input);
	cout << result << endl;
}
