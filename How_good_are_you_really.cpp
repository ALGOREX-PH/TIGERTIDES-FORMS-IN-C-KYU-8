#include <vector>
#include <iostream>
using namespace std;
bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  // your code here
  int vector_size = classPoints.size();
  int total = 0;
  bool answer = false;
  for (int x = 0; x < vector_size; x++){
  	total += classPoints[x];
  }
  total /= vector_size;
  
  if (total < yourPoints){
  	answer = true;
  }
  return answer;
}
int main(){
	std::vector<int> input_points = {2, 3};
	int my_points = 5;
	bool result = betterThanAverage(input_points, my_points);
	cout << result << endl;
}