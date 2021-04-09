#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int string_to_number(const std::string& s) {
  //your code here
  int answer = 0;
  stringstream me;
  me << s;
  me >> answer;
  return answer;
}
int main (){
	string number = "-7";
	int result = string_to_number(number);
	cout << result << endl;
}