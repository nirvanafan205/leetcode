//Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
//Return the array in the form [x1,y1,x2,y2,...,xn,yn].

public class shuffle
{
	public int[] shuffle(int[] nums, int n)
	{
		int[] yArray = new int[nums.length - n];

		int[] xArray = new int[nums.length - n];

		for(int i = 0; i < n; i++)
		{
			xArray[i] = nums[i];
		}

		int end = nums.length - n;

		for(int j = 0, b = 0; j < nums.length; j++)
		{
			if(j >= n)
			{
				yArray[b++] = nums[j];
			}
		}

		int length = n * 2;

		int[] sortedArray = new int[length];

		for(int q = 0, w = 0, e = 0 ; q < length; q++)
		{
			if(q % 2 == 0)
			{
				sortedArray[q] = xArray[w++];
			}

			else if(q % 2 == 1)
			{
				sortedArray[q] = yArray[e++];
			}
		}

		return sortedArray;
	}

	public static void main(String[] args)
	{
		int nums[] = { 2, 5, 1, 3, 4 , 7 };

		int n = 3;

		shuffle caller = new shuffle();

		caller.shuffle(nums, n);
	}
}
