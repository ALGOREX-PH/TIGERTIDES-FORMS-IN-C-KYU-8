#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
int index(const std::vector<int> &vector, int n) {
  //your code here
  int vector_size = vector.size();
  int arr[vector_size];
  for (int x = 0; x < vector_size; x++){
  	arr[x] = vector[x];
  }
  
  if (n <= vector_size -1){
  	int answer = pow(arr[n], n);
  	return answer;
  }
  else{
  return -1;	
  }
}

int main(){
	std::vector <int> input = {1,2,3,4};
	int x = 2;
	int result = index(input, x);
	cout << result << endl;
}