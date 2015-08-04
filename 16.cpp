#include <iostream>

using namespace std;
// issue : format string
int main(){
  int i = 0;
  int j = j;
  while(i < 10){
    j = i * i;
//    cout << i << " x " << i << " = " << j << endl;
    printf("%d x %d = %d\n", i, i, j);
    i = i + 1;
  }
  return 0;
}
