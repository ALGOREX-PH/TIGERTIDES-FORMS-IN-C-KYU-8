#include <vector>
#include <iostream>
using namespace std;
std::vector<int> quadratic(int a,int b){
// Answer in vector
std::vector <int> answer;
answer.push_back(1);

int second = a+b;
second *= -1;
answer.push_back(second);
int third = a*b;
answer.push_back(third);
return answer;
}
int main (){
	int x = 0;
	int y = 1;
	std::vector<int> result = quadratic(x, y);
	int vector_size = result.size();
	for (int z = 0; z < vector_size; z++){
		cout << result[z] << endl;
	}
}