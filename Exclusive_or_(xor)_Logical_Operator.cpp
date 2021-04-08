#include <iostream>
using namespace std;
bool xorf(bool a, bool b)
{
     //your code here:
     
     if (a != b){
     	return true;
	 }else{
	 	return false;
	 }
	 
   
}

int main (){
	bool input_a = false;
	bool input_b = true;
	bool result = xorf(input_a, input_b);
	cout << result << endl;
}
