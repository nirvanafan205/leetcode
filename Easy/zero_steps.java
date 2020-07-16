/*Given a non-negative integer num, return the number of steps to reduce it to zero.
 *If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
 */

public class zero_steps
{
	public int numberOfSteps(int num)
	{
		int count = 0;
		boolean zero = true;

		while(zero)
		{
			if(num == 0)
			{
				zero = false;
			}

			else if(num % 2 == 0)
			{
				num = num / 2;
				count++;
			}

			else if(num % 2 == 1)
			{
				num = num - 1;
				count++;
			}
		}

		return count;
	}

	public static void main(String[] args)
	{
		int num = 14;

		zero_steps obj = new zero_steps();

		obj.numberOfSteps();
	}
}
