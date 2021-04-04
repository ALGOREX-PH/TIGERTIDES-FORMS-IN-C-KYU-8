#include <iostream>
#include <string>
using namespace std;
std::string greet(const std::string& n){
  //your code here
  string catcher;
catcher += "Hello, ";
catcher += n;
catcher += " how are you doing today?";
  return catcher;
}
int main(){
	string name = "Ryan";
	string result = greet(name);
	cout << result << endl;
	
}
