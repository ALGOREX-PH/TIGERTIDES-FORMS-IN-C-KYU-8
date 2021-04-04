#include <string>
#include <iostream>
using namespace std;

string greet(){
	string hello_world_1 = "hello world!";
	return hello_world_1;
}
int main (){
	string x = greet();
	cout << x << endl;
}
