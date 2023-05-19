#include <iostream>
class Car{
	public:
		double x;
		int p;
		double v;
};

int main () {
	using namespace std;
	cout << "Test v3.01:OK" << endl;
	Car car;
	cout << "car.x: " << car.x << endl;
	cout << "car.p: " << car.p << endl;
	cout << "car.v: " << car.v << endl;
	car.x = 12.3;
	car.p = 4;
	car.v = 3.4;
	cout << "car.x: " << car.x << endl;
	cout << "car.p: " << car.p << endl;
	cout << "car.v: " << car.v << endl;
	return 0;
}
