using System;
using System.Collections.Generic;

class Test {
  static void Main() {
    List<string> names = new List<string>();
    names.Add("Liz");
    names.Add("Martha");
    names.Add("Beth");
    for(int i = 0; i < names.Count; i++){
      string s = names[i];
      names[i] = s.ToUpper();
      Console.WriteLine(names[i]);
    }
  }
}
