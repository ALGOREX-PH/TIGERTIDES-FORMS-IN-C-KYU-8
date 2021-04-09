#include <iostream>
using namespace std;
class Triangle {
public:
  static int otherAngle(int a, int b){
  	int total = 180;
  	total -= a + b;
  	return total;
  	
  }
};

int main (){
	
	int angle_1 = 60;
	int angle_2 = 60;
	Triangle tri;
	int result = tri.otherAngle(angle_1, angle_2);
	cout << result << endl;
}