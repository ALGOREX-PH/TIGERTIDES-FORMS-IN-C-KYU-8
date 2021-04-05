#include <iostream>
using namespace std;
int twice_as_old(int dad, int son) {
  
  int son_2 = son*2;
  
  int answer = dad - son_2;
  
  if (answer < 0){
  	answer *= -1;
  }

  return answer;
}
int main (){
	int son_age = 7;
	int dad_age = 36;
	int result = twice_as_old(dad_age, son_age);
	cout << result << endl;
}