#include <vector>
#include <iostream>
using namespace std;
int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int vector_a_size = a.size();
  int vector_b_size = b.size();
  int answer = 0;
  
  for (int x = 0; x < vector_a_size; x++){
  	answer += a[x];
  }
  
  for (int y = 0; y < vector_b_size; y++){
  	answer += b[y];
  }
  
  return answer; // something went wrong
}
int main (){
	std::vector<int> input_1 = {1, 2, 3};
	std::vector<int> input_2 = {4, 5, 6};
	int result = arrayPlusArray(input_1, input_2);
	cout << result << endl;
}