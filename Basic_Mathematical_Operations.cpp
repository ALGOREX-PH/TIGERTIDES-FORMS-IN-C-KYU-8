#include <iostream>
using namespace std;
int basicOp(char op, int val1, int val2) {
  // Your code here
  int answer = 0;
  
  switch(op){
  	case '+':
  		answer = val1 + val2;
  		break;
  	
	case '-':
	    answer = val1 - val2;
		break;
		
	case '*':
	    answer = val1 * val2;
		break;
		
	case '/':
	    answer = val1 / val2;
		break;		  	
  }
  return answer;
}
int main (){
	char operation = '+';
	int input_1 = 2;
	int input_2 = 3;
	int result = basicOp(operation, input_1, input_2);
	cout << result << endl;
}