#include <iostream>
#include <vector>
using namespace std; 
int count_sheep(std::vector<bool> arr) 
{
  int size_of_vector = arr.size();
  int present = 0;
  for (int x = 0; x < size_of_vector; x++){
  	if (arr[x] == true){
  		present++;
	  }
  }
  return present;
  present = 0;
}


int main (){
	
std::vector<bool> sheep = {true,  true,  true,  false, true,  true,  true,  true , true,  false, true,  false, true,  false, false, true, true,  true,  true,  true, false, false, true, true};	
int result = count_sheep(sheep);
cout << result << endl;	
}

