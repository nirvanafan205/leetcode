//two sums
/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
  You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

public class two_sum
{
	public static void main(String[] args)
	{
		int target = 9;

		int array[] = { 2, 15 , 11, 7 };

		for(int i = 0; i < array.length; i++)
		{
			for(int j = 0; j < array.length; j++)
			{
				if(array[i] + array[j] == target)
				{
					System.out.println(i + "," + j);

					System.exit(0);
				}
			}
		}
	}
}
