/*Given the array of integers nums, you will choose two different indices i and j of that array.
 *Return the maximum value of (nums[i]-1)*(nums[j]-1). 
 */

import java.util.Arrays;

public class max_product
{
	public int maxProduct(int[] nums)
	{
		Arrays.sort(nums);

		int max = nums.length - 1;

		int other = nums.length - 2;

		int product = (nums[other] - 1) * (nums[max] - 1);
		
		return product;
	}

	public static void main(String[] args)
	{
		int nums[] = { 3, 4, 5, 2 };

		max_product obj = new max_product();

		obj.maxProduct(nums);
	}
}
