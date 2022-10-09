public class stocks
{
	void maxProfit(int[] prices)
	{
		int left = 0; //left pointer
		int right = 1; //right pointer
		int maxProfit = 0; //default 0 value

		while(right < prices.length) //checks to make sure not out of bounds
		{
			if(prices[left] < prices[right]) //checks to make sure profits can be made
			{
				maxProfit = Math.max(maxProfit, prices[right] - prices[left]);// maxProfit becomes remainder of right pointer - left pointer also checks for largets profits
											      // compares every previous max with the new max
											      // when a new occurence of p[r] > p[l]
				right++; //counter goes up
			}	

			else // if right pointer is greater than left pointer no profits
			{
				left = right;  // switches values
				right++; //increments by one
			}
		}

	}

	public static void main(String[] args)
	{
		int[] nums = { 7, 1, 5, 3, 6, 4 };

		stocks caller = new stocks();

		caller.maxProfit(nums);
	}
}
