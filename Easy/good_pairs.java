// A pair (i,j) is called good if nums[i] == nums[j] and i < j

public class good_pairs
{
	public int numIdenticalPairs(int[] nums)
	{
		int good_pairs = 0;

		for(int i = 0; i < nums.length; i++)
		{
			for(int j = 0; j < nums.length; j++)
			{
				if(nums[i] == nums[j] && i < j)
				{
					good_pairs += 1;			
				}
			}
		}

		return good_pairs;
	}

	public static void main(String[] args)
	{
		int nums[] = { 1, 1, 1, 1 };

		good_pairs obj = new good_pairs();

		obj.numIdenticalPairs(nums);
	}
}
