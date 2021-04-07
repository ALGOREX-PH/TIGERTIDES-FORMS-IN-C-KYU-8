#include <iostream>
#include <string>
using namespace std;
std::string get_planet_name(int id)
{
	string answer; 
  switch(id){
  	
  	case 1:
  		answer = "Mercury";
  		break;
  	
  	case 2:
  		answer = "Venus";
  		break;
  		
  	case 3:
	   answer = "Earth";
	   break;
	   
	case 4:
	   answer = "Mars";
	   break;
	   
	case 5:
	   answer = "Jupiter";
	   break;
	
	case 6:
	   answer = "Saturn";
	   break;
	   
	case 7:
	   answer = "Uranus";
	   break;   
	      
	case 8:
	   answer = "Neptune";
	   break;
	
	
	      
  }
  return answer;
}
int main(){
	int input_ID = 1;
	string result = get_planet_name(input_ID);
	cout << result << endl;
}