#include <string>
#include <iostream>
using namespace std;

string DNAStrand(const string dna)
{ //your code here
	int dna_length = dna.length();
	string string_catch;
	for (int x = 0; x < dna_length; x++){
	char letter_dna = dna.at(x);
	
	if (letter_dna == 'A'){
		string_catch += 'T';
	}
	
	if (letter_dna == 'T'){
		string_catch += 'A';
	}
	
	if (letter_dna == 'C'){
		string_catch += 'G';
	}
	
	if (letter_dna == 'G'){
		string_catch += 'C';
	}
	
	
}
  return string_catch;
  string_catch = "";
}



int main (){
	string dna1 = "ATTGC";
	string result = DNAStrand(dna1);
	cout << result << endl;
	
	string dna2 = "GTAT";
	result =  DNAStrand(dna2);
	cout << result << endl;
}
