using System;

public class Pair<TFirst,TSecond> {
				public TFirst First;
				public TSecond Second;
}

public class MainRunner {
				static void Main() {
								Pair<int,string> pair = new Pair<int,string> { First = 1, Second = "two" }; 
								int i = pair.First;
								string s = pair.Second;
								Console.WriteLine(pair);
								Console.WriteLine(pair.First + " " + pair.Second);
				}
}