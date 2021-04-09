#include <iostream>
using namespace std;
int combat(int health, int damage){
  //Code here!
  int answer = health - damage;
  
  if (answer < 0){
  	answer = 0;
  }
  return answer;
}
int main (){
	int input_health = 100;
	int input_damage = 5;
	int result = combat(input_health, input_damage);
	cout << result << endl;
}