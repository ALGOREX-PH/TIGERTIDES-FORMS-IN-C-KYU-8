#include <iostream>
using namespace std;
int goals (int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
  
  int answer = laLigaGoals + copaDelReyGoals + championsLeagueGoals;
  return answer;
}
int main (){
	int la_liga = 43;
	int copa_del_rey = 10;
	int champions_league = 5;
	int result = goals(la_liga, copa_del_rey, champions_league);
	cout << result << endl;
}