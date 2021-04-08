#include <iostream>
using namespace std;
bool checkForFactor(int base, int factor) {
  // your code here
  bool answer = false;
  if (base % factor == 0){
  	answer = true;
  }
  return answer;
}
int main (){
	int base_input = 10;
	int factor_input = 2;
	bool result = checkForFactor(base_input, factor_input);
	cout << result << endl;
	}
