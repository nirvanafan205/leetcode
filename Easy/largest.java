/*Find whether the largest element in the array is at least twice as much as every other number in the array.
If it is, return the index of the largest element, otherwise return -1. */

public class largest
{
	public int dominantIndex(int[] nums)
	{
		int largest = nums[0];
		int pos = nums[0];

		for(int i = 0; i < nums.length; i++)
		{
			if(largest <= nums[i])
			{
				largest = nums[i];
				pos = i;
			}
		}

		int check = largest;

		for(int j = 0; j < nums.length; j++)
		{
			if(largest < (nums[j] * 2) && nums[j] != largest)
			{
				largest = nums[j];
			}
		}

		if(largest == check)
		{
			return pos;
		}

		else
		{
			return -1;
		}
	}

	public static void main(String[] args)
	{
		int nums[] ={48,57,6,80,29,55,97,4,26,29,41,28,84,54,89,1,85,11,90,47,37,50,0,96,44,64,42,41,64,62,61,52,57,10,44,78,20,23,38,56,81,5,56,40,81,40,56,17,97,16};

		largest caller = new largest();

		caller.dominantIndex(nums);
	}
}
