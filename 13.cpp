#include <iostream>
#include <string>

using namespace std;

template <typename TFirst, typename TSecond>
class Pair {
public:
		TFirst First;
		TSecond Second;
		Pair(int x, string y) {
				this->First = x;
				this->Second = y;
		}
};

int main() {
		Pair<int, string>* p1 = new Pair<int, string>(1, "two");
		cout << "Pair`2[System.Int32,System.String]" << endl;
		cout << p1->First << " " << p1->Second << endl;
}
