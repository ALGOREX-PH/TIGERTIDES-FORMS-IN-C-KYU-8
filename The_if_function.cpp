#include <iostream>
using namespace std;

void func1(){
	
	cout << "true" << endl;
	
}

void func2(){
	
	cout << "false" << endl;
	
}

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
	
 if (value == true){
 	func1();
 	
 }else{
 	
 	func2();
 }
}


int main(){
	bool yesorno = true;
	_if(yesorno);
}
