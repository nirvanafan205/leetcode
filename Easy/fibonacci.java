/*The Fibonacci numbers, commonly denoted F(n) form a sequence,
  called the Fibonacci sequence, such that each number is the sum of the two preceding ones,
  starting from 0 and 1
  */

import java.lang.Math;

public class fibonacci
{
	public int fib(int N)
	{
		double phi = (1 + Math.sqrt(5)) / 2;

		return (int) Math.round(Math.pow(phi, N) / Math.sqrt(5));
	}

	public static void main(String[] args)
	{
		int N = 4;

		fibonacci obj = new fibonacci();

		obj.fib(N);
	}
}
