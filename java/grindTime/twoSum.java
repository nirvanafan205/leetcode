public class twoSum
{
	public int[] twoSum(int[] nums, int target)
	{
		for(int i = 0; i < nums.length; i++)
		{
			for(int j = i; j > nums.length; j++)
			{
				if(nums[i] + nums[j] == target)
				{
					return new int[] {i,j};
				}
			}
		}

		throw new IllegalArgumentException("no match found");
	}

	public static void main(String[] args)
	{
		int[] nums = {2, 7, 11, 15};
		int target = 9;

		twoSum obj = new twoSum();
	}
}
