#include <string>
#include <iostream>
#include <sstream>
using namespace std;
std::string integrate(const int& coefficient,const int& exponent){
  //your code here
  int x = coefficient;
  int y = exponent;
  y++;
  x = x / y;
  string answer;
  stringstream me;
  me << x << "x^" << y;
  me >> answer;
  return answer;
}
int main (){
	int coefficient_input = 3;
	int exponent_input = 2;
	std::string result = integrate(coefficient_input, exponent_input);
	cout << result << endl;
}