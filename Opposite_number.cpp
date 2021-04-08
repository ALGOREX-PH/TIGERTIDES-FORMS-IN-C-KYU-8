#include <iostream>
using namespace std;
int opposite(int number) 
{
return number * -1;
}
int main(){
	int input = 50;
	int result = opposite(input);
	cout << result << endl;
}