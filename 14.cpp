#include <iostream>
#include <string>

using namespace std;

class Point {
public:
		int x;
		int y;
		Point(int x, int y) {
				this->x = x;
				this->y = y;
		}
};

class Point3D: public Point {
public:
		int z;
		Point3D(int x, int y, int z) : Point(x,y) {
				this->z = z;
		}
};


int main() {
		Point* a = new Point(10, 20);
		Point3D* b = new Point3D(10, 20, 30);
		cout << b->x << " " << b->y << " " << b->z << endl;
}
