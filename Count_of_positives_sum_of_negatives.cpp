#include <vector>
#include <iostream>
using namespace std;
std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    // go for it!
    std::vector<int> answer;
    int vector_size = input.size();
    int positive_count = 0;
    int sum_of_negative = 0;
     
  if(vector_size <= 0){
    return answer; 
    for (int x = 0; x < vector_size; x++){
    	
    	if (input[x] > 0){
    		positive_count++;
		}else
		
		if (input[x] < 0){
			sum_of_negative += input[x];
		}
	}
	 
}
	answer.push_back(positive_count);
	answer.push_back(sum_of_negative);
    
    return answer;
}

int main (){
	std::vector<int> user_input = {};
	std::vector<int> result = countPositivesSumNegatives(user_input);
	int result_size = result.size();
	for(int y = 0; y < result_size; y++){
		cout << result[y];
	}
	}
	
	
	
	
	
