#include <vector>
#include <string>
#include <iostream>
using namespace std;
string howManyDalmatians(int number){

  std::vector<string> dogs = {"Hardly any", "More than a handful!", "Woah that's a lot of dogs!", "101 DALMATIONS!!!"};
  string answer; 
  
  if (number <= 10){
  	answer = dogs[0];
  }else
  
  if (number <= 50){
  	answer = dogs[1];
  }else
  
  if (number <= 100){
  	answer = dogs[2];
  }else
  
  if (number == 101){
  	answer = dogs[3];
  }
  return answer;
}
int main () {
	int number =  8;
	string result = howManyDalmatians(number);
	cout << result << endl;
}
