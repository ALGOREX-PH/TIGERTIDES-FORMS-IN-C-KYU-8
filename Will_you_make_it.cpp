#include <iostream>
using namespace std;
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
	bool answer = false;
	uint32_t can_drive = mpg * fuel_left;
	
	if (can_drive >= distance_to_pump){
		answer = true;
	}
	return answer;
  // TODO
}
int main (){
	uint32_t distance_of_gas_station = 50;
	uint32_t miles_per_gallon = 25;
	uint32_t fuel_in_tank = 2;
	bool result = zero_fuel(distance_of_gas_station, miles_per_gallon, fuel_in_tank);
	cout << result << endl;
}