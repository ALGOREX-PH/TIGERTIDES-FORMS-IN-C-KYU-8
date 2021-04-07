#include <vector>
#include <iostream>
using namespace std;

std::vector<int> arr(int n) {
  // the numbers 0 to N-1
  std::vector <int> answer;
  for (int x = 0; x < n; x++){
  	answer.push_back(x);
  }
  return answer;
}
int main (){
	int input = 4;
	std::vector <int> result = arr(input);
	int result_size = result.size();
	
	for (int y = 0; y < result_size; y++){
	  cout << result[y] << endl;
	}
}
