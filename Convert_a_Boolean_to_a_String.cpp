#include <string>
#include <iostream>
using namespace std;
std::string boolean_to_string(bool b){
  //Your code here

  if (b == 1){
  	return "true";
  }else
  {
  	return "false";
  }
}
int main (){
bool x = true;
string result = boolean_to_string(x);
cout << result << endl;	

}