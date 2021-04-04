#include <string>
#include <iostream>
using namespace std;
std::string how_much_i_love_you(int nb_petals) {
  // your code
 string answer;
 int below_6 = nb_petals % 6;
 
 if (below_6 == 0){
 	answer = "not at all";
 }else
 
 if (below_6 == 1){
 	answer = "I love you";
 }else
 
 if (below_6 == 2){
 	answer = "a little";
 }else
 
 if (below_6 == 3){
 	answer = "a lot";
 }else
 
 if (below_6 == 4){
 	answer = "passionately";
 }else
 
 if (below_6 == 5){
 	answer = "madly";
 }
 
  return answer;
}
int main (){
int number_of_petals = ;
string result = how_much_i_love_you(number_of_petals);
cout << result << endl;

}
