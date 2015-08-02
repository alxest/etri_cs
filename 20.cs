using System;
using System.Collections.Generic;

// overloading 
class Test {
  static void F() { Console.WriteLine("F()"); }
  static void F(object x) { Console.WriteLine("F(object)"); }
  static void F(int x) { Console.WriteLine("F(int)"); }
  static void F(double x) { Console.WriteLine("F(double)"); }
  static void F<T>(T x) { Console.WriteLine("F<T>(T)"); }
  static void F(double x, double y) { Console.WriteLine("F(double, double)"); }
  static void Main() { 
    F();
    F(1);
    F(1.0); 
    F("abc"); 
    F((double)1); 
    F((object)1); 
    F<int>(1); 
    F(1, 1);
  }
}
