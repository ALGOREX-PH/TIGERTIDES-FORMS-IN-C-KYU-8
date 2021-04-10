#include <iostream>
using namespace std;

class Person
{
    public:
        person(int x, int y, int z)
            : m_x(x), m_y(y), m_z(z)
        {
        }
        
        void location(int& x, int& y, int& z)
        {
            x = m_x;
            y = m_y;
            z = m_z;
        }
        
    private:
        int m_x;
        int m_y;
        int m_z;
};
int main (){
	int inputx = 0;
	int inputy = 0;
	int inputz = 0;
    Person.person(2,3,5);
	Person.location(inputx, inputy, inputz);
	cout << inputx << endl;
	cout << inputy << endl;
	cout << inputz << endl;
}