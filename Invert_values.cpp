#include <vector>
#include <iostream>
using namespace std;
std::vector<int> invert(std::vector<int> values)
{
	std::vector<int> answer;
	int vector_size = values.size();
	for (int x = 0; x < vector_size; x++){
		int inverts = values[x];
			inverts *= -1; 
			answer.push_back(inverts);  
		
    
}
return answer;
}
int main(){
	std::vector<int>number_1 = {-1,-2,-3,-4,-5};
	std::vector<int>result = invert(number_1);
	int result_size = result.size();
	
	for (int y = 0; y < result_size; y++){
		cout << result[y] << endl;
	}
}
