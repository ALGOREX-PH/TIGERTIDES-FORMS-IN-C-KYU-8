#include <iostream>
#include <cmath>
using namespace std;
bool PythagoreanTriple(const int a, const int b, const int c)
{
	bool answer = false;
	int power_a = pow(a,2);
	int power_b = pow(b,2);
	int power_c = pow(c,2);
	
	if (power_a + power_b == power_c){
		answer = true;
	}
	
  return answer;
}
int main (){
	int input_1 = 3;
	int input_2 = 4;
	int input_3 = 5;
	bool result = PythagoreanTriple(input_1, input_2, input_3);
	cout << result << endl;
}