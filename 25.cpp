#include <iostream>
#include <list>

using namespace std;

int main (){
  list<int>* a = new list<int>();
  a->push_back(1);
  a->push_back(2);
  list<int>* b = new list<int>();
  b->push_back(1);
  b->push_back(2);
  cout << (a == b) << endl;    
  b->push_back(3);
  cout << (a == b) << endl;
}
