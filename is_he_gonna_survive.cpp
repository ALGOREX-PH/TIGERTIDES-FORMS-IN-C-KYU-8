#include<iostream>
using namespace std;
bool hero(int bullets, int dragons) {
	int bullet = bullets / 2;
	
	if (bullet >= dragons){
		return true;
	}else{
		return false;
	}
}

int main(){
	int bullet_num = 10;
	int dragon_num = 5;
	bool result = hero(bullet_num, dragon_num);
	cout << result << endl;
}