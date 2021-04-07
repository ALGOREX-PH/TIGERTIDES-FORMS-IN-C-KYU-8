#include <vector>
#include <iostream>
using namespace std;
int positive_sum (const std::vector<int> arr){
  // Your code here
  int answer = 0;
  int vector_size = arr.size();
  
  for (int x = 0; x < vector_size; x++){
  	
  	if (arr[x] > 0){
  		answer += arr[x];
	  }
  }
  
  return answer;
}

int main(){
	std::vector<int> input = {1,2,3,4,5};
	int result = positive_sum(input);
	cout << result << endl;
}