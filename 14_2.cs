using System;

public class Color {
				public static readonly Color Black = new Color(0, 0, 0);
				public static readonly Color White = new Color(255, 255, 255);
				public static readonly Color Red = new Color(255, 0, 0);
				public static readonly Color Green = new Color(0, 255, 0);
				public static readonly Color Blue = new Color(0, 0, 255);
				// private byte r, g, b;
				public byte r, g, b;
				public Color(byte r, byte g, byte b) {
								this.r = r;
								this.g = g;
								this.b = b;
				}
}

class MainRunner {
  static void Main() {
						Console.WriteLine(Color.Black.r + " " + Color.Black.g + " " + Color.Black.b);
  }
}
