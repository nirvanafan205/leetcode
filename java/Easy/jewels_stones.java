public class jewels_stones
{
	public void jeweles(String J, String S)
	{
		int count = 0;

		for(int i = 0; i < J.length(); i++)
		{
			for(int b = 0; b < S.length(); b++)
			{
				char j = J.charAt(i);
				char s = S.charAt(b);

				if(j == s)
				{
					count++;
				}
			}
		}

		System.out.println(count);
	}

	public static void main(String[] args)
	{
		jewels_stones caller = new jewels_stones();

		String jewels = "aA";
		String stones = "aAAbbbb";

		caller.jeweles(jewels, stones);	
	}
}
