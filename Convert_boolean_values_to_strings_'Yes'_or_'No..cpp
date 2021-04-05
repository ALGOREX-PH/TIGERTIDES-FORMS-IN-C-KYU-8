#include <iostream>
#include <string>
using namespace std;

string bool_to_word(bool value)
{
  if (value == 1){
  	return "Yes";
  }else{
  	return "No";
  }
}
int main (){
	bool value_1 = 1;
	string d = bool_to_word(value_1);
	cout << d << endl;
}