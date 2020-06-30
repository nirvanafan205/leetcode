// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
//Return the running sum of nums.

public class running_sum
{
	public int[] runningSum(int[] nums)
	{
		int length = nums.length - 1;

		for(int i = length; i > 0; i--)
		{
			for(int j = length; j > 0; j--)
			{
				nums[i] += nums[j - 1];		
			}

			length--;
		}

		return nums;
	}
	public static void main(String[] args)
	{
		running_sum caller = new running_sum();

		int nums[] = { 1, 2 , 3 , 4 };

		caller.runningSum(nums);
	}
}
