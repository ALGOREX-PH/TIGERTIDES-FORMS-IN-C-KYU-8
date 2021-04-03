#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int FindOutlier(std::vector<int> arr)
{
	int result = 0; 
	int count_even = 0;
	bool even_nums = false;
  int x = 0;
  int size_of_vector = arr.size();
  
   for (int y = 0; y < size_of_vector; y++){
   	   
   	   if (arr[y] % 2 == 0){
   	   	count_even++;
		  }		  
   }
   
   if (count_even > 1){
		  	for (int even_vector = 0; even_vector < size_of_vector; even_vector++){
		  		
		  		if (arr[even_vector] % 2 != 0){
				  result = arr[even_vector];
				  }
			  }
		  }
		  
    if (count_even == 1){
    	    for (int odd_vector = 0; odd_vector < size_of_vector; odd_vector++){
    	    	
    	    	if (arr[odd_vector] % 2 == 0){
    	    		result = arr[odd_vector];
				}
			} 
		     
	}	     
    return result;
    count_even = 0;
}

int main (){
	
	std::vector<int> vector1 = {2, 4, 0, 100, 4, 11, 2602, 36};
    int x = FindOutlier(vector1);
    cout << x << endl;
     
    std::vector<int> vector2 = {160, 3, 1719, 19, 11, 13, -21};
    int x_2 = FindOutlier(vector2);
    cout << x_2 << endl;

	
}
