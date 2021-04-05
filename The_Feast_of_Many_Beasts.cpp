#include <string>
#include <iostream>
using namespace std;
bool feast(std::string beast, std::string dish){
  //your code here
  char temp_1 = beast.at(0);
  char temp_2 = dish.at(0);
  char temp_3 = beast.at(beast.length() -1 );
  char temp_4 = dish.at(dish.length() -1 );
  if (temp_1 == temp_2 && temp_3 == temp_4){
  
  	return true;
  }
  else{
  	return false;
  }
  
}
int main (){
	string beast_name = "great blue heron";
	string dish_name = "garlic naan";
	bool result = feast(beast_name, dish_name);
	cout << result << endl;
}