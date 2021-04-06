#include<iostream>
using namespace std;
int makeNegative(int num)
{
 if (num > 0){
 	num *= -1;
 }
 return num;
}
int main (){
	int x = -5;
	int result = makeNegative(x);
	cout << result << endl;
}