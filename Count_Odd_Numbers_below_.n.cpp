#include <iostream>
using namespace std;
int odd_count(int n){
  //your code here
  int answer = 0;
  for (int x = 1; x < n; x += 2){
    if(x > n){
    	break;
	}
	answer++;
  }
  return answer;
}
int main (){
 int input = 15;
 int result = odd_count(input);
 cout << result << endl;
}