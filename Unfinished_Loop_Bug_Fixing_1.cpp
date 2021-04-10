#include <iostream>
#include <vector>
using namespace std;
std::vector<int> createVector(const int n)
{
	std::vector<int> res;

	for (int i = 1; i <= n; i++)
	{
		res.push_back(i);
	}

	return res;
}
int main (){
	int input = 5;
	std::vector<int> result = createVector(input);
	int result_size = result.size();
	for(int y = 0; y < result_size; y++){
		cout << result[y] << endl;
	}
}