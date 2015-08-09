#include <iostream>
#include <string>

using namespace std;

template <typename TFirst, typename TSecond>
class Pair {
public:
		TFirst First;
		TSecond Second;
		Pair(int x, int y) {
				this->First = x;
				this->Second = y;
		}
};

int main() {
		Pair<int, int>* p1 = new Pair<int, int>(0, 0);
		printf("Pair`2[System.Int32,System.Int32]\n");
		printf("%d %d\n", p1->First, p1->Second);
}
