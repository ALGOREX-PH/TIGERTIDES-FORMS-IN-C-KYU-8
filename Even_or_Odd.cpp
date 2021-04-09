#include <iostream>
using namespace std;
std::string even_or_odd(int number) 
{
  std::string answer;
  
  if (number % 2 == 0){
  	answer = "Even";
  }
  else{
  answer = "Odd";	
  }
  return answer;
}
int main (){
	int input = 3;
	std::string result = even_or_odd(input);
	cout << result << endl;
}