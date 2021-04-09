#include <iostream>
using namespace std;

class Cube {
private:
	int side = 0;
	
public: 

void SetSide(int number){
	side = number;
}

int GetSide(){
	return side;
}
};

int main (){
	int input = 5;
	Cube cubes;
	cubes.SetSide(input);
	int answer = cubes.GetSide();
	cout << answer << endl;
}