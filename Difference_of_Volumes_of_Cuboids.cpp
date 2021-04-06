#include <array>
#include <iostream>
using namespace std;
int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
  // your code here
  int answer = a[0] * a[1] * a[2] - b[0] * b[1] * b[2];
  
if (answer < 0){
	answer *= -1;
}  
  
return answer;
}
int main(){
	std::array<int, 3> cuboid_1 = {3, 2, 5};
	std::array<int, 3> cuboid_2 = {1, 4, 4};
	int result = findDifference(cuboid_1, cuboid_2);
    cout << result << endl;	
	
	
	
}