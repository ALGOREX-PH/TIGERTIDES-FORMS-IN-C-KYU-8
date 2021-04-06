#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
	int vector_size = numbers.size();
	std::vector<int> answer;
	for ( int x = 0; x < vector_size; x++){
	int temp = numbers[x];
	
	if (temp % divisor == 0){
		answer.push_back(temp);
	}
	}
    return answer;
}
int main(){
	std::vector<int> number = {1, 2, 3, 4, 5, 6};
	int divide = 2;
	std::vector<int> result = divisible_by(number, divide);
	int result_size = result.size();
	
	for(int y = 0; y < result_size; y++){
		cout << result[y] << endl;
	}		
}
