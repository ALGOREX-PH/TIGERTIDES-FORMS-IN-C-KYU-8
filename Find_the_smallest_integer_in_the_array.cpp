#include <vector>
#include <iostream>
using namespace std;
int findSmallest(std::vector <int> list)
{  // Your Code is Here ... Hope you Enjoy
int smallest_integer = 0;
int vector_size = list.size();

for (int x = 0; x < vector_size; x++){
	if (smallest_integer == 0){
		smallest_integer = list[x];
	}
	
	if (smallest_integer > list[x]){
		smallest_integer = list[x];
	}
} 
  return smallest_integer;
}

int main(){
std::vector<int> vector_needed = {34, 15, 88, 2};
int result = findSmallest(vector_needed);
cout << result << endl;	
	
	
}
