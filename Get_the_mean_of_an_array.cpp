#include <iostream>
#include <vector>
using namespace std;
int get_average(std::vector <int> marks)
{
  // Your Code is Here ... Enjoy !!!
  int vector_size = marks.size();
  int answer = 0;
  for (int x = 0; x < vector_size; x++){
  	answer += marks[x];
  }
  
  answer /= vector_size;
  return answer;
}

int main(){
	std::vector <int> input_marks = {1, 5, 87, 45, 8, 8};
	int result = get_average(input_marks);
	cout << result << endl;
}