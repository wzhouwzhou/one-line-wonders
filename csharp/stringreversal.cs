using System;
					
public class Program
{
	public static void Main()
	{
		string line = Console.ReadLine();
		
		Func<string, string> fac = n => (n.Length < 1) ? string.Empty : n[n.Length-1] + fac(n.Substring(0, n.Length - 1));

		Console.WriteLine(fac(line));
	}
}
