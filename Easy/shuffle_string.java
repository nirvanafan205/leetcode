class shuffle_string
{
	public int min(int[] array, int min, int prev)
	{
		int pos = 0;

		for(int i = 0; i < array.length; i++)
		{
			if(min >= array[i] && min != prev)
			{
				array[i] = min;

				pos = i;
			}
		}

		return pos;
	}

	public void restoreString(String s, int[] indices)
	{
		char[] array = new char[indices.length];

		int min = 0;

		int prev = min;

		for(int i = 0; i < indices.length; i++)
		{

			for(int j = 0; j < array.length; j++)
			{
				if(min >= array[j])
				{
					indices[j] = min;
				}
			}


			int num = min(indices, min, prev); 

			min += 1;

			char c = s.charAt(num);

			array[i] = c;
		}

		String str = new String(array);

		System.out.println(str);
	}

	public static void main(String[] args)
	{
		shuffle_string obj = new shuffle_string();

		String s = "codeleet";

		int[] indices = { 4, 5, 6, 7, 0, 2, 1, 3};

		obj.restoreString(s, indices);
	}
}
