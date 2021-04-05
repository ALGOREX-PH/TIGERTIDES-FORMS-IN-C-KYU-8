#include <array>
#include <string>
#include <iostream>
using namespace std;
std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  // your code here
  
  std::array<std::string, 3> answer;
  
  for (int x = 0; x < 3; x++){
  	string temp = arr[x];
  	
  	answer[2 - x] = temp;
  	
  }
  return answer;
}
int main(){

std::array<std::string, 3> the_meer_kat = {{"tail", "body", "head"}};
std::array<std::string, 3> result = fixTheMeerkat(the_meer_kat);

for (int y = 0; y < 3; y++){
	cout << result[y] << endl;
}
}
