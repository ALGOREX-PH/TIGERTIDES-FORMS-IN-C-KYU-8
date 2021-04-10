#include <iostream>
#include <string>
using namespace std;
std::string chromosomeCheck(std::string sperm) {
std::string answer;

if (sperm == "XY"){
	answer = "Congratulations! You're going to have a son.";
}else{
	answer = "Congratulations! You're going to have a daughter.";
}
return answer;
}
int main (){
	std::string input = "XY";
	std::string result = chromosomeCheck(input);
	cout << result << endl;
}