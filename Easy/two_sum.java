/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 *You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

public class two_sum
{
	public int[] array (int[] nums, int target)
	{
		for(int i = 0; i < nums.length; i++)
		{
			for(int j = i + 1; j < nums.length; j++)
			{
				if(nums[i] + nums[j] == target)
				{
					return new int[] {i,j};
				}
			}
		}

		throw new IllegalArgumentException("no match");
	}

	public static void main(String[] args)
	{
		int[] numbers = { 1, 2, 3 };
		int target = 3;

		two_sum caller = new two_sum();

		caller.array(numbers,target);
	}
}
