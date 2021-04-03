#include <iostream>
#include <vector>
using namespace std;

std::vector<int> reverseSeq(int n) {
//your code here
std::vector<int> answer;

for (int x = n; x >= 1; x--){
	answer.push_back(x);
}
return answer;
}

int main (){
int number = 10;
std::vector<int> result = reverseSeq(number);

for (int y = 0; y < result.size(); y++){
	cout << result[y] << endl;
} 
	
	
	
	
	
}
