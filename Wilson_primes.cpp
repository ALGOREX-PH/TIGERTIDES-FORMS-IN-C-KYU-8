	#include <iostream>
	using namespace std;
	bool is_input_a_prime_number(unsigned int n){
		bool is_it_a_prime = false;
		if (n < 2){
			return is_it_a_prime;
		}
		
		for (int x = 2; x < n; x++){
			
			if (n % x == 0){
				return is_it_a_prime;
			}
		}
		is_it_a_prime = true;
		return is_it_a_prime;
	}
	
	bool amIWilson(unsigned int n) {
	  // Check if a number is a Wilson prime
	  bool answer = false;
	  
	  if (is_input_a_prime_number(n) == false){
	  	return answer;
	  }
	  
	  unsigned int mandatory_plus_1 = 1;
	  
	  for (unsigned int y = 2; y < n ; y++){
	  	mandatory_plus_1 = mandatory_plus_1 * y % (n * n);
	       }
	  
	  if (mandatory_plus_1 == n * n - 1){
	  		answer = true;
		  }
		  
		  return answer;
	}
	
	int main (){
		unsigned int number_input = 5;
		bool result = amIWilson(number_input);
		cout << result << endl;
	}     