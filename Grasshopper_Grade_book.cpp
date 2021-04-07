#include <iostream>
#include <string>
using namespace std;
char getGrade(int a, int b, int c) {
  // your code here
  int final_grade = a + b + c;
  final_grade = final_grade / 3;
  char answer;
  if(final_grade >= 90 && final_grade <= 100){
  	answer = 'A';
  }else
  
  if (final_grade >= 80 && final_grade <= 89){
    answer = 'B';
	
  }else
  
  if (final_grade >= 70 && final_grade <= 79){
  	answer = 'C';
	
  }else
  
  if (final_grade >= 60 && final_grade <= 69){
  	answer = 'D';
	
  }else
  
  if (final_grade >= 0 && final_grade <= 59){
    answer = 'F';	
  }
  return answer;
}
int main(){
	int input_1 = 45;
	int input_2 = 45;
	int input_3 = 45;
	char result = getGrade(input_1, input_2, input_3);
	cout << result << endl;
	return 0;
}