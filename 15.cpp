#include <iostream>
#include <string>

using namespace std;

void Swap(int *x, int *y) {
		int temp = *x;
		*x = *y;
		*y = temp;
}

int main() {
		int i = 1;
		int j = 2;
		Swap(&i, &j);
		cout << i << " " << j << endl;
}
