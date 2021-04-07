#include <vector>
#include <iostream>
using namespace std;
int grow(std::vector<int> nums) {
  // your code here
  int vector_size = nums.size();
  int answer = 1;
  
  for (int x = 0; x < vector_size; x++){
  	int temp = nums[x];
  	answer *= temp;
  }
  return answer;
}
int main(){
	std::vector<int> input = {2, 2, 2, 2, 2, 2};
	int result = grow(input);
	cout << result << endl;
}