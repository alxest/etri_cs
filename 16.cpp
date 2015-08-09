#include <iostream>
#include <string>

using namespace std;

void Divide(int x, int y, int *result, int *remainder) {
		*result = x / y;
		*remainder = x % y;
}

void ParamArray(int length, ...) {
		va_list args;
  va_start(args, length);
		cout << length << endl;
		for(int i=0; i<length; i++) {
				cout << va_arg(args, int) << " ";
		}
		cout << endl;
}

int main() {
		int res, rem;
		Divide(10, 3, &res, &rem);
		cout << res << " " << rem << endl;
		ParamArray(4,5,2,6,8);
}
