#include <iostream>
#include <string>
using namespace std;

std::string greet(std::string name) 
{
  
  if(name == "Johnny") {
    return "Hello, my love!";
}
 else{
  return "Hello, " + name + "!";
}
  
}

int main (){
	std::string input = "Jim";
	std::string result = greet(input);
	cout << result << endl;
}