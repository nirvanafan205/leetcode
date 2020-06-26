/* Given an array A of non-negative integers, return an array consisting 
   of all the even elements of A, followed by all the odd elements of A. */

public class array_parity
{
	void sort(int arr[]) // insertion sort
	{
		int n = arr.length;

		for(int i = 1; i < n; ++i)
		{
			int key = arr[i];
			int j = i - 1;

			while(j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}

			arr[j + 1] = key;
		}
	}

	void sorting(int array[])
	{
		for(int i = 0; i < array.length; i++)
		{
			if(i % 2 == 1)
			{
				int temp_ = array[i - 1];

				array[i - 1] = array[i];

				array[i] = temp_;
			}
		}

		int median = array.length / 2;

		int temp = array[median - 1];

		array[median - 1] = array[median];

		array[median] = temp;
	}

	public static void main(String[] args)
	{
		int array[] = { 3, 1, 2, 4 };

		array_parity obj = new array_parity();

		obj.sort(array);

		obj.sorting(array);

		for(int i = 0; i < array.length; i++)
		{
			System.out.println(array[i]);
		}
	}
}
