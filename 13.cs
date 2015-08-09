using System;

public class Pair<TFirst,TSecond> {
				public TFirst First;
				public TSecond Second;
				public Pair(TFirst x, TSecond y) {
								First = x;
								Second = y;
				}

}

public class MainRunner {
				static void Main() {
								Pair<int, int> p1 = new Pair<int, int>(0, 0);
								Console.WriteLine(p1);
								Console.WriteLine(p1.First + " " + p1.Second);
				}
}