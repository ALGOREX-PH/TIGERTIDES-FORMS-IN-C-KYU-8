#include<vector>
#include <iostream>
using namespace std;
int sum(std::vector<int> numbers)
{
	int answer = 0;
    int lowest = numbers[0];
    int highest = numbers[0];
    int vector_size = numbers.size();
    
    for (int find_the_lowest_and_highest = 0; find_the_lowest_and_highest < vector_size; find_the_lowest_and_highest++){
    	int current_number = numbers[find_the_lowest_and_highest];
    	
    	if (lowest > current_number){
    		lowest = current_number;
		}
		
		if (highest < current_number){
			highest = current_number;
		}
	}
	
	for (int x = 0; x < vector_size; x++){
		int current_number_2 = numbers[x];
		 answer += current_number_2;	
		
	}
	answer -= highest;
	answer -= lowest;
    return answer;
}
int main (){
	std::vector<int> input_1 = { 1, 1, 11, 2, 3 };
	int result = sum(input_1);
	cout << result << endl;
}