#include <iostream>
using namespace std;

int paperwork(int n, int m){
    int answer = n * m;
    
    if (answer < 0 || n < 0 || m < 0){
    	answer = 0;
	}
    return answer;
}

int main(){
	int classmates = -5;
	int pages = -5;
	int result = paperwork(classmates, pages);
	cout << result << endl;
}
