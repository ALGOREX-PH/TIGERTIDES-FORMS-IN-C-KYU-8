#include <iostream>
using namespace std;

int multiply(int a, int b)
{
	int answer = a * b;
	return answer;
}
int main (){
	int x = 5;
	int y = 10;
	int result = multiply(x, y);
	cout << result << endl;
}