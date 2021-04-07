#include <iostream>
using namespace std;
int summation(int num){
 //Code Here
 int answer = 0;
 for (int x = 0; x <= num; x++){
 	answer += x;
 }
 return answer;
}
int main (){
	int num = 8;
	int result = summation(num);
	cout << result << endl;
}