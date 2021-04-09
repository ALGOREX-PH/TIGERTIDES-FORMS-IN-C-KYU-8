#include <iostream>
using namespace std;
int simpleMultiplication(int a){
    //Your code
    int answer = 0;
    if (a % 2 == 0){
    	answer = a * 8;
	}else {
		answer = a * 9;
	}
	return answer;
}
int main (){
	int input = 8;
	int result = simpleMultiplication(input);
	cout << result << endl;
}