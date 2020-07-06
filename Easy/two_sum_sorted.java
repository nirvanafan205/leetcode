/*Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.
Note:
    Your returned answers (both index1 and index2) are not zero-based.
    You may assume that each input would have exactly one solution and you may not use the same element twice.
*/

public class two_sum_sorted
{
	public int[] array (int[] nums, int target)
	{
		for(int i = 0; i < nums.length; i++)
		{
			for(int j = i + 1; j < nums.length; j++)
			{
				if(nums[i] + nums[j] == target)
				{
					i += 1;
					j += 1;

					int list [] =  {i,j};
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
