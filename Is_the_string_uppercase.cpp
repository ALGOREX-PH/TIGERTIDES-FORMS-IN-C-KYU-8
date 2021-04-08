#include <string>
#include <iostream>
using namespace std;
bool is_uppercase(const std::string &s) {
  int s_length = s.length();
  bool answer = true;
  
  for(int x = 0; x < s_length; x++){
  	char temp = s.at(x);
  	int ascii_value = int(temp);
  	
  	if (ascii_value > 97 && ascii_value <= 122){
  		answer = false;
	  }
  }
  return answer; // TODO
}

int main(){
	string input = "hello I AM DONALD";
	bool result = is_uppercase(input);
	cout << result << endl;
}