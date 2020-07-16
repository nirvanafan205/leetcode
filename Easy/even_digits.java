//Given an array nums of integers, return how many of them contain an even number of digits. 

import java.util.*;

public class even_digits
{
	public int findNumbers(int[] nums)
	{
		List<Integer> check = new ArrayList<Integer>();

		int count = 0;

		int output = 0;

		for(int i = 0; i < nums.length; i++)
		{
			while(nums[i] > 0)
			{
				nums[i] /= 10;

				count++;	
			}

			check.add(count);

			count = 0;
		}

		for(int even : check)
		{
			if(even % 2 == 0)
			{
				output++;
			}
		}

		return output;
	}

	public static void main(String[] args)
	{
		int nums[] = { 12, 345, 2, 6, 7896 };

		even_digits caller = new even_digits();

		caller.findNumbers(nums);
	}
}
