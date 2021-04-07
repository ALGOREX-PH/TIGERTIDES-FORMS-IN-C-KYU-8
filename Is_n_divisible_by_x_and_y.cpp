#include <iostream>
using namespace std;
bool isDivisible(int n, int x, int y) {
  // your code here
  bool answer = false;
  if (n % x == 0 && n % y == 0){
  	answer = true;
  }
  return answer;
}
int main(){
	int num_1 = 100;
	int num_2 = 5;
	int num_3 = 10;
	bool result = isDivisible(num_1, num_2, num_3);
	cout << result << endl;
}