#include <iostream>
using namespace std;
unsigned int hotpo(unsigned int n){
	unsigned int answer = 0;
	unsigned int number_input = n;
    if(n == 0) return answer; //Optional Handler to n = 0
    
    for (answer = 0; number_input > 1; answer++){
    	
		if (number_input % 2 == 0){
			number_input = number_input / 2;
		}else {
			number_input = 3 * number_input + 1;
		}
	}
	return answer;
}
int main (){
	unsigned int input = 1;
	unsigned int result = hotpo(input);
	cout << result << endl;
}