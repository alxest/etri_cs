using System;
class Test {
				static void Divide(int x, int y, out int result, out int remainder) {
								result = x / y;
								remainder = x % y;
				}
				static void ParamArray(params int[] args) {
								Console.WriteLine(args.Length);
								for(int i=0; i<args.Length; i++)
												Console.Write(args[i] + " ");
								Console.WriteLine();
				}
				static void Main() {
								int res, rem;
								Divide(10, 3, out res, out rem); Console.WriteLine("{0} {1}", res, rem);
								ParamArray(5,2,6,8);
				}
}