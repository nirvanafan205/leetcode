class Solution 
{
	public int[] bubbleSort(int[] arr)
	{
		int n = arr.length;

		for(int i = 0; i < n - 1; i++)
		{
			for(int j = 0; j < n - 1; j++)
			{
				if(arr[j] > arr[j + 1])
				{
					int temp = arr[j];

					arr[j] = arr[j + 1];

					arr[j + 1] = temp;
				}
			}
		}

		return arr;
	}

	public boolean uniqueOccurrences(int[] arr)
	{
		List<Integer> check = new ArrayList<Integer>();

		int count = 0;

		Solution caller = new Solution();

		caller.bubbleSort(arr);

		for(int i = 0; i < arr.length - 1; i++)
		{
			if(arr[i] == arr[i + 1])
			{
				continue;
			}

			else
			{
				for(int j = 0; j < arr.length; j++)
				{
					if(arr[i] == arr[j])
					{
						count++;
					}
				}

				check.add(count);

				count -= count;
			}
		}

		boolean answer = true;

		for(int c = 1; c < check.size() - 1; c++)
		{
			if(check.get(c) == check.get(c + 1) )
			{
				answer = false;
			}
		}
		return answer;
	}

	public static void main(String[] args)
	{
	
	}
}
