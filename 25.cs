using System;
using System.Collections.Generic;

class Test {
  static void Main() {
    List<int> a = new List<int>();
    a.Add(1);
    a.Add(2);
    List<int> b = new List<int>();
    b.Add(1);
    b.Add(2);
    Console.WriteLine(a == b);    // The manual says "true", Mono says "false"
    b.Add(3);
    Console.WriteLine(a == b);    // false
  }
}
