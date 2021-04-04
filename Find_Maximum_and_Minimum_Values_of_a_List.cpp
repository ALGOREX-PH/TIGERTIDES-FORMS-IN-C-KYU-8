#include <vector>
#include <iostream>
using namespace std;

int min(std::vector<int> list){
    
    int list_size = list.size();
    int smallest = 0;
    
    for (int x = 0; x < list_size; x++){
    if (smallest == 0){
    	smallest = list[x];
	}
	
	if (smallest > list[x]){
		smallest = list[x];
	} 
	}
    return smallest;
}

int max(std::vector<int> list){
     int list_size = list.size();
    int highest = 0;
    
    for (int x = 0; x < list_size; x++){
    if (highest == 0){
    	highest = list[x];
	}
	
	if (highest < list[x]){
		highest = list[x];
	} 
	}
    return highest;
}

int main(){
	std::vector<int> example = {-52, 56, 30, 29, -54, 0, -110};
	int up = max(example);
	int down = min(example);
	cout << up << endl;
	cout << down << endl;
	
	
	
	
	
	
}
