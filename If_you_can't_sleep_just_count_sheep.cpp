#include <string>
#include <sstream>
#include <iostream>
using namespace std;
std::string countSheep(int number) {
  // your code here
  string answer;
  for (int x = 1; x <= number; x++){
  	string temp;
  	stringstream me;
  	me << x;
  	me >> temp;
  	temp = temp + " " + "sheep...";
  	answer += temp;
  }
  return answer;
}
int main (){
	int input = 5;
	std::string result = countSheep(input);
	cout << result << endl;
}