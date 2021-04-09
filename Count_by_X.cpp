#include <vector>
#include <iostream>
using namespace std;
std::vector<int> countBy(int x,int n){
	std::vector<int> answer;
	
	for (int z = 1; z <= n; z++){
		answer.push_back(z * x);
	}
  return answer;
}

int main (){
	int input_1 = 100;
	int input_2 = 5;
	std::vector<int> result = countBy(input_1, input_2);
	int result_size = result.size();
	
	for (int y = 0; y < result_size; y++){
		cout << result[y] << endl;
	}
	
}