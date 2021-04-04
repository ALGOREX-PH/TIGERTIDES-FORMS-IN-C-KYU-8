#include <iostream>
#include <string>
#include <sstream>
using namespace std;

std::string DNAtoRNA(std::string dna){
  // your code here
  int dna_string_length = dna.length();
  string catcher;
  for (int x = 0; x < dna_string_length; x++){
  	char letter = dna.at(x);
  	
  	if (letter == 'T'){
  	catcher += 'U'; 
	}else{
		catcher += letter;
	}
  }  
  return catcher;
}

int main (){
	string dna_example = "GCAT";
	string result = DNAtoRNA(dna_example);
	cout << result << endl;
}
