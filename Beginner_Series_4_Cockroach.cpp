#include <iostream>
using namespace std;
int cockroach_speed(double s)
{
	int speed = s * 27.7778;
    return speed; //Good Luck!
}
int main(){
	double input = 1.08;
	int result = cockroach_speed(input);
	cout << result << endl;
}
