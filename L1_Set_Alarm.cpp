#include <iostream>
using namespace std;
bool set_alarm(const bool& employed,const bool& vacation){
	bool answer = false;
	
	if (employed == true){
		answer = true;
	}
	
	if (vacation == true){
		answer = false;
	}
  return answer;
}
int main(){
	bool are_you_employed = true;
	bool are_you_in_vacation = true;
	bool result = set_alarm(are_you_employed, are_you_in_vacation);
	cout << result << endl;
}