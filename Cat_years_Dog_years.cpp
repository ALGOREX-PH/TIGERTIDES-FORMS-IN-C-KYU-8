#include <vector>
#include <iostream>
using namespace std;

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
//your code here
std::vector<int> answer;
int cat_years = 0;
int dog_years = 0;
answer.push_back(humanYears);
for (int cat_for_loop = 1; cat_for_loop <= humanYears; cat_for_loop++){
	
	if (cat_for_loop == 1){
		cat_years += 15;
	}else
	if (cat_for_loop == 2){
		cat_years += 9;
	}else
	if (cat_for_loop  > 2){
		cat_years += 4;
	}
}
answer.push_back(cat_years);

for(int dog_for_loop = 1; dog_for_loop <= humanYears; dog_for_loop++){
	
	if (dog_for_loop == 1){
		dog_years += 15;
	}else
	if (dog_for_loop == 2){
		dog_years += 9;
	}else
	if (dog_for_loop > 2){
		dog_years += 5;
	}
}
answer.push_back(dog_years);
return answer;
}


int main(){
int years = 10;
std::vector<int> result = humanYearsCatYearsDogYears(years);
for (int x = 0; x < result.size(); x++){
cout << result[x] << endl; 
}
}
