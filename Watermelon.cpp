#include <iostream>
using namespace std;
bool divide(unsigned int weight)
{
	bool answer = false;
	int evens = 0;
	int equal = 0;
	for (int x = 1; x <= weight; x++){
	     
		 if (x % 2 == 0){
	     	evens++;
	    
	     	for (int y = 1; y <= weight; y++){
	     		
	     		if (y % 2 == 0){
	     			
	     			if (x + y == weight){
	     				equal++;
	     				
					 }
				 }
			 }
		 }
	}
	 if (evens >= 2 && equal >= 1){
		 	answer = true;
		 }
	
    return answer;
}
int main(){
   unsigned int weight_input = 50;
   bool can_be_equal = divide(weight_input);
   cout << can_be_equal << endl;
}