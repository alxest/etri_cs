#include <iostream>

// issue : static field initialization
class Entity {
  public:
    static int nextSerialNo;
    int serialNo;
    Entity() {
      serialNo = nextSerialNo++;
    }
    int GetSerialNo() { 
      return serialNo;
    }
    static int GetNextSerialNo() { 
      return nextSerialNo;
    }
    static void SetNextSerialNo(int value) { 
      nextSerialNo = value;
    } 
};

using namespace std;

int Entity::nextSerialNo = 0;

int main() { 
  Entity::SetNextSerialNo(1000);
  Entity *e1 = new Entity(); 
  Entity *e2 = new Entity();
  cout << e1->GetSerialNo() << endl; // 1000
  cout << e2->GetSerialNo() << endl; // 1001
  cout << Entity::GetNextSerialNo() << endl;  //1002
}
