import java.util.Arrays;

public class duplicate
{
	public boolean containsDuplicate(int[] nums)
	{
		Arrays.sort(nums);

		for(int i = 1; i < nums.length; i++)
		{
			if(nums[i] == nums[i - 1])
			{
				return true;
			}
		}
		
		return false;
	}

	public static void main(String[] args)
	{
		int nums[] = { 1, 2, 3, 1};

		duplicate obj = new duplicate();

		obj.containsDuplicate(nums);
	}
}
