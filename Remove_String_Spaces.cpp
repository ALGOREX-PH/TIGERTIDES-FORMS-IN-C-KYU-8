#include <string>
#include <iostream>
#include <sstream>
using namespace std;
std::string no_space(std::string x)
{
    //your code here
    string catcher;
    int length = x.length();
    
    for (int y = 0; y < length; y++){
    	char temp = x.at(y);
    	if (temp != ' '){
    		catcher += temp;
		}
	}
	return catcher;
}



int main (){
	
	string example ="8 j 8   mBliB8g  imjB8B8  jl  B";
	string result = no_space(example);
	cout << result << endl;
	
}