using System;

class Entity {
  static int nextSerialNo;
  int serialNo;
  public Entity() {
    serialNo = nextSerialNo++;
  }
  public int GetSerialNo() { 
    return serialNo;
  }
  public static int GetNextSerialNo() { 
    return nextSerialNo;
  }
  public static void SetNextSerialNo(int value) { 
    nextSerialNo = value;
  } 
}

class Test {
  static void Main() { 
    Entity.SetNextSerialNo(1000);
    Entity e1 = new Entity(); 
    Entity e2 = new Entity();
    Console.WriteLine(e1.GetSerialNo()); // 1000
    Console.WriteLine(e2.GetSerialNo()); // 1001
    Console.WriteLine(Entity.GetNextSerialNo());  //1002
  }
}
