/*You are given an integer array nums and you have to return a new counts array.
 *The counts array has the property where counts[i] is the number of smaller elements to the right of nums[i]
 */

import java.util.*;

public class smaller_rights
{
	public List<Integer> countSmaller(int[] nums)
	{
		int n = nums.length - 1;

		int counter = 0;

		List<Integer> count = new ArrayList<Integer>();

		for(int i = 0; i < nums.length; i++)
		{
			if(i == n)
			{
				count.add(counter);
				break;
			}

			for(int j = i + 1; j < nums.length; j++)
			{
				if(nums[i] > nums[j])
				{
					counter++;
				}
			}

			count.add(counter);

			counter = 0;
		}

		return count;
	}

	public static void main(String[] args)
	{
		int nums[] =  { 5, 2, 6, 1 };

		smaller_rights obj = new smaller_rights();

		obj.countSmaller(nums);
	}
}
