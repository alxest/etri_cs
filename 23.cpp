#include <iostream>
#include <list>
#include <vector>
using namespace std;

// issue: list library (operator [])
// issue: string library (ToUpper)
int main(){
//  list<string> *names = new list<string>();
  vector<string> *names = new vector<string>();
  names->push_back("Liz");
  names->push_back("Martha");
  names->push_back("Beth");

  locale loc;
  for(int i = 0; i < names->size(); i++){
    string s = (*names)[i];
    for (string::iterator p = s.begin(); s.end() != p; ++p)
      *p = toupper(*p);
    (*names)[i] = s;
    cout << (*names)[i] << endl;
  }
}

