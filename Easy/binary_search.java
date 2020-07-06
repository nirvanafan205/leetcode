//Given a sorted (in ascending order) integer array nums of n elements and a target value, 
//write a function to search target in nums. If target exists, then return its index, otherwise return -1.

public class binary_search
{
	public int search(int nums[], int target)
	{
		int l = 0, r = nums.length - 1; 

		while (l <= r) 
		{
			int m = l + (r - l) / 2; 

			if (nums[m] == target) 
			{
				return m; 
			}

			if (nums[m] < target) 
			{	
				l = m + 1; 
			}

			else
			{
				r = m - 1; 
			}
		} 

		return -1;
	}

	public static void main(String[] args)
	{
		int nums[] = { -1, 0, 3, 5, 9, 12 };

		int target = 9;

		binary_search obj = new binary_search();

		obj.search(nums, target);
	}
}
