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

int main() {
		Point* p1 = new Point(0, 0);
		Point* p2 = new Point(10, 20);
		printf("%s %s\n", "Point", "Point");
		printf("%d %d\n", p1->x, p2->x);
		p1 = p2;
		printf("%d %d\n", p1->x, p2->x);
		p1->x = 100;
		printf("%d %d\n", p1->x, p2->x);
}
