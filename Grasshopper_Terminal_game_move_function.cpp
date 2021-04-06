#include <iostream>
using namespace std;

int move(int position, int roll) {
  // your code here
  roll = roll*2 + position;
  return roll; 
}
int main (){
	int hero_position = 2;
	int rolls = 5;
	int result = move(hero_position, rolls);
	cout << result << endl;
	
	
	
	
	
}