#include <vector>
#include <iostream>
using namespace std;
int sum(std::vector<int> nums) {
  // your code here
  int answer = 0;
  int vector_size = nums.size();
  for (int x = 0; x < vector_size; x++){
  	answer += nums[x];
  }
  return answer;
}
int main (){
	std::vector <int> input = {1, 2, -3, 3, 4};
	int result = sum(input);
	cout << result << endl;
	}
