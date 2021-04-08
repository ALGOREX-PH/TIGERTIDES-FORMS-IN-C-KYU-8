#include <iostream>
using namespace std;
double getVolumeOfCubiod(double length, double width, double height) {
  // Your code here...
  return length * width * height; 
}
int main (){
	double length_input = 6.3;
	double width_input = 2;
	double height_input = 5;
	double result = getVolumeOfCubiod(length_input, width_input, height_input);
	cout << result << endl;
}