#include <iostream>
using namespace std;
int nthEven(int n) {
 int counter = 0;
 int even_counter = 0;
  while (n >= even_counter){
  	if (counter % 2 == 0){
  		even_counter++;
	  }
	  
	if (n == even_counter){
		break;
	}
  	counter++;
  }
  return counter;
}

int main(){
int number_even = 100;	
int result = nthEven(number_even);
cout << result << endl;	
}

