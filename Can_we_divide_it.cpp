#include <iostream>
using namespace std;
bool isDivideBy(int number, int a, int b)
{
	bool answer = false;
  //your code here
  
  if (number % b == 0 && number % a  == 0 ){
  	answer = true;
  }
  return answer;
}

int main(){
	int num = 8;
	int num_2 = 2;
	int num_3 = 4;
	bool result = isDivideBy(num, num_2, num_3);
	cout << result << endl; 
}
