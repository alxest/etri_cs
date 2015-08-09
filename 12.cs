using System;

public class Point {
				public int x, y;
				public Point(int x, int y) {
								this.x = x;
								this.y = y;
				}
}

class MainRunner {
  static void Main() {
						Point p1 = new Point(0, 0);
						Point p2 = new Point(10, 20);
						Console.WriteLine(p1 + " " + p2);
						Console.WriteLine(p1.x + " " + p2.x);
						p1 = p2;
						Console.WriteLine(p1.x + " " + p2.x);
						p1.x = 100;
						Console.WriteLine(p1.x + " " + p2.x);
  }
}
