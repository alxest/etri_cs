#include <iostream>
#include <list>
#include <vector>
using namespace std;

// Issue : object class, main class, main function
class Test {
  public:
    static void F() { cout << ("F()") << endl; }
//    static void F(object x) { cout << ("F(object)") << endl; }
    static void F(int x) { cout << ("F(int)") << endl; }
    static void F(double x) { cout << ("F(double)") << endl; }
    template<typename T> static void F(T x) { cout << ("F<T>(T)") << endl; }
    static void F(double x, double y) { cout << ("F(double, double)") << endl; }
};

int main(){
  Test::F();
  Test::F(1);
  Test::F(1.0); 
  Test::F("abc"); 
  Test::F((double)1); 
//  Test::F((object)1); 
  Test::F<int>(1); 
  Test::F(1, 1);
}
