#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


string twoSort (std::vector<string> s)
{
	
	int vector_size = s.size();
	sort(s.begin(), s.end());
	string letter;
	char letter_char;
	int container = 0;
	int lowest_ascii_value = 0; 
	for (int x = 0; x < vector_size; x++){
		letter = s.at(0);
		stringstream me (letter);
		me >> letter_char;
		int ascii_value = int(letter_char) - 96;
		
		if (ascii_value < lowest_ascii_value){
			lowest_ascii_value = ascii_value;
			container = x;
		}
		
	}
	string content = s[container];
	int content_length = content.length();
	string catcher;
	string final_answer;
	for (int y = 0; y < content_length; y++){
		letter = content.at(y);
		catcher += letter;
		
		if (y < content_length - 1){
			catcher +="***";
		}
	} 
	final_answer = catcher;
    return final_answer;
}
int main (){
std::vector<string> r = {"turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones" };
string result = twoSort(r);
cout << result << endl;
}



