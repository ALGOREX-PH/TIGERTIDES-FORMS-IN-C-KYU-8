#include <string>
#include <iostream>
using namespace std;
std::string rps(const std::string& p1, const std::string& p2)
{
	std::string answer;
	
	if (p1 == "rock"){
		if (p2 == "rock"){
			answer = "Draw!";
		}
		
		if (p2 == "paper"){
			answer = "Player 2 won!";
		}
		
		if (p2 == "scissors"){
			answer = "Player 1 won!";
		}
	}
	
	if (p1 == "scissors"){
		if (p2 == "rock"){
			answer = "Player 2 won!";
		}
		
		if (p2 == "paper"){
			answer = "Player 1 won!";
		}
		
		if (p2 == "scissors"){
			answer = "Draw!";
		}
	}
	
	if (p1 == "paper"){
		if (p2 == "rock"){
			answer = "Player 1 won!";
		}
		
		if (p2 == "paper"){
			answer = "Draw!";
		}
		
		if (p2 == "scissors"){
			answer = "Player 2 won!";
		}
	}
	
    return answer;
}
int main (){
	std::string input_1 = "rock";
	std::string input_2 = "rock";
	std::string result = rps(input_1, input_2);
	cout << result << endl;
}