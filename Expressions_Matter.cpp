#include <iostream>
using namespace std;
unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    // Your Code is Here .. Enjoy !!
    int blocks_1 = b + c;
    int blocks_2 = a + b;
    int x = a * blocks_1;
    int y = a * b * c;
    int z = a + b * c;
    int v = blocks_2 * c;
    int r = a + b + c;
    
    if (x >= y && x >= z && x >= v && x >= r){ 
    	return x;
	}else
	
	if (y >= x && y >= z && y >= v && y >= r){
		return y;
	}else
	
	if (z >= x && z >= y && z >= v && z >= r){
		return z;
	}else
	
	if (v >= x && v >= y && v >= z && v >= r){
		return v;
	}else
	
	if (r >= x && r >= y && r >= z && r >= v){
		return r;
	}else{
		return 0;
	}
}
int main (){
	unsigned short int input_1 = 2; 
	unsigned short int input_2 = 1;
	unsigned short int input_3 = 2;
	unsigned short int result = expressionsMatter(input_1, input_2, input_3);
	cout << result << endl;
}