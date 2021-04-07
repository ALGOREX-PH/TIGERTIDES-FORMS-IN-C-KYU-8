#include <iostream>
using namespace std;

int square (int x){
	return x * x;
}
int main (){
	int input = 2; 
	int result = square(input);
	cout << result << endl;
}