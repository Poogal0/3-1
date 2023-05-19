#include <iostream>
class Car{
	public:
		double x;
		int p;
		double v;
		Car();
		Car(int newP, double newV);
};

Car::Car() {
	x = 0.0;
	p = 1;
	v = 0.0;
}

Car::Car(int newP, double newV) {;
	x = 0.0;
	p = newP;
	v = newV;
}
int main () {
	using namespace std;
	cout << "Test v3.01:OK" << endl;
	Car car;
	Car carFord(5, 20);
	cout << "car.x: " << car.x << endl;
	cout << "car.p: " << car.p << endl;
	cout << "car.v: " << car.v << endl;
	car.x = 12.3;
	car.p = 4;
	car.v = 3.4;
	cout << "car.x: " << car.x << endl;
	cout << "car.p: " << car.p << endl;
	cout << "car.v: " << car.v << endl;
	cout << "carFord.x: " << carFord.x << endl;
	cout << "carFord.p: " << carFord.p << endl;
	cout << "carFord.v: " << carFord.v << endl;
	return 0;
}
