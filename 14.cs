using System;

public class Point {
				public int x, y;
				public Point(int x, int y) {
								this.x = x;
								this.y = y;
				}
}

public class Point3D: Point {
				public int z;
				public Point3D(int x, int y, int z): base(x, y) {
								this.z = z;
				}
}

class MainRunner {
  static void Main() {
						Point a = new Point(10, 20);
						Point3D b = new Point3D(10, 20, 30);
						Console.WriteLine(b.x + " " + b.y + " " + b.z);
  }
}
