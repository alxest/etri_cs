#include <iostream>
#include <string>

using namespace std;

void Divide(int x, int y, int *result, int *remainder) {
		*result = x / y;
		*remainder = x % y;
}

int main() {
		int res, rem;
		Divide(10, 3, &res, &rem);
		cout << res << " " << rem << endl;
}
