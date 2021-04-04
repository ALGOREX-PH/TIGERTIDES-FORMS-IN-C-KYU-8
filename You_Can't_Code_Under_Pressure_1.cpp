#include <cstdint>
#include <iostream>
using namespace std;

int32_t double_integer(int32_t n)
{  // We need solution fast !!!
   n *= 2;
   return n;
}
int main (){
	int32_t x = 5;
	int32_t result = double_integer(x);
	cout << result << endl;
}
