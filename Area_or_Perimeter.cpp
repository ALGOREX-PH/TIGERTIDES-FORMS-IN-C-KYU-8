#include <iostream>
using namespace std;
int area_or_perimeter(int l , int w) {
  // code away....
  int answer = l + w;
  answer = 2* answer;
  return answer;
}
int main(){
	int area = 6;
	int perimeter = 10;
	int result = area_or_perimeter(area, perimeter);
	cout << result << endl;
}