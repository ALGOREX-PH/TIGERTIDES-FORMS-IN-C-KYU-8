#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
std::string makeUpperCase (const std::string& input_str)
{
	std::string answer = input_str;
	std::transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
	return answer;
}

int main(){
    string input = "hello";
    string result = makeUpperCase(input);
    cout << result << endl;
}