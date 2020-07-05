/*Given an array of integers A sorted in non-decreasing order,
 *return an array of the squares of each number, also in sorted non-decreasing order.
 */

import java.util.Arrays;

public class array_squares
{
	public int[] sortedSquares(int[] A)
	{
		for(int i = 0; i < A.length; i++)
		{
			A[i] *= A[i];
		}

		Arrays.sort(A);

		return A;
	}

	public static void main(String[] args)
	{
		int A[] = { -4, -1, 0, 3, 10 };

		array_squares obj = new array_squares();

		obj.sortedSquares(A);
	}
}
