/*Given an array arr, replace every element in that array with the greatest element among the elements to its right
 *replace the last element with -1.
 *After doing so, return the array.
 */

public class replace 
{
	public int[] replaceElements(int[] arr)
	{
		int n = arr.length - 1;

		int max = 0;

		for(int i = 0; i < arr.length; i++)
		{
			if(i == n)
			{
				arr[i] = -1;

				break;
			}

			for(int j = i + 1; j < arr.length; j++)
			{

				if(max < arr[j])
				{
					max = arr[j];
				}
			}

			arr[i] = max;

			max = 0;
		}

		return arr;
	}

	public static void main(String[] args)
	{
		int arr[] = { 17, 18, 5, 4, 6, 1 };

		replace caller = new replace();

		caller.replaceElements(arr);
	}
}
