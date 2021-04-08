#include <vector>
#include <iostream>
using namespace std;
std::vector<int> MonkeyCount(int n) {
  // your code here
  std::vector<int> answer;
  
  for (int x = 1; x <= n; x++){
  	answer.push_back(x);
  }
  return answer;
}
int main(){
	int input = 10;
	std::vector<int> result = MonkeyCount(input);
	int result_size = result.size();
	
	for(int y = 0; y < result_size; y++){
		cout << result[y] << " " ;
	}
	}