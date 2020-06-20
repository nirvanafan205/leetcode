//Given a non-empty array of integers, every element appears twice except for one. Find that single one.

public class Single_number
{
	public int singleNumber(int[] nums)
	{
		int target;

		for(int i = 0; i < nums.length; i++)
		{
			int count = 0;

			for(int j = 0; j < nums.length; j++)
			{
				if(nums[i] == nums[j])
				{
					count++;
				}
			}

			if(count == 1)
			{
				target = nums[i];

				return target;
			}
		}

		throw new IllegalArgumentException("no match");
	}

	public static void main(String[] args)
	{
		int array[] = { 2, 2, 5, 2, 2 };

		Single_number caller = new Single_number();

		caller.singleNumber(array);
	}
}
