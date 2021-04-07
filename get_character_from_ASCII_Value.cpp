#include <iostream>
using namespace std;
char get_char(int i) {
 char answer = char(i);
 return answer;
}

int main (){
	int input = 65;
	char result = get_char(input);
	cout << result << endl;
}