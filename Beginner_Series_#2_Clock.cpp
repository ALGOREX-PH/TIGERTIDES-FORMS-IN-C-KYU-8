#include <iostream>
using namespace std;
int past(int h, int m, int s) {
  // your code here
  int answer = 0;
  s *= 1000;
  m *= 60000;
  h *= 60000*60;
  answer += s + m + h;
  return answer;
}
int main (){
	int hour = 0;
	int minute = 1;
	int second = 1;
	int result = past(hour, minute, second);
	cout << result << endl;
}
