#include <vector>
#include <iostream>
using namespace std;
int square_sum(const std::vector<int>& numbers)
{
	int answer = 0;
	int vector_size = numbers.size();
	for (int x = 0; x < vector_size; x++){
		answer += numbers[x] * numbers[x];
	}
    return answer;
}
int main (){
	std::vector <int> input = {0, 3, 4, 5};
	int result = square_sum(input);
	cout << result << endl;
}