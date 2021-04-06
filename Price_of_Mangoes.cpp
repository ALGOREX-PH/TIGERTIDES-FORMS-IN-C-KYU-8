#include <iostream>
using namespace std;
int mango(int quantity, int price)
{   int counter = 0;
   	int money_pay = 0;
   	
   	for (int x = 0; x <= quantity; x++){		
			money_pay += price;
			
			if (x % 3 == 0){
   	     	counter = 0;
   	     	money_pay -= price;
			}

	   }
return money_pay;	
}

int main (){
	int how_many_mangoes = 3;
	int price_of_mango = 3;
	int result = mango(how_many_mangoes, price_of_mango);
	cout << result << endl;
}
