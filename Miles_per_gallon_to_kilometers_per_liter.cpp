#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;
double converter(int mpg)
{ // do your magic
double kpl = 0.354006044*mpg;
double kpl_2 = 0;
stringstream me;
me << setprecision(2) << fixed << kpl;
me >> kpl_2;
return kpl_2;
}
int main(){
	
int x = 12;
double result = converter(x);
cout << result << endl;	
}
