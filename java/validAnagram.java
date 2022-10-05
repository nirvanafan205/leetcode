import java.util.HashMap;

public class validAnagram
{
	public boolean isAnagram(String s, String t)
	{
		if(s.length() != t.length() )
		{
			return false;
		}

		else
		{
			// made two hash mapes for each string
			HashMap<Character, Integer> s1 = new HashMap<Character, Integer>();
			HashMap<Character, Integer> t1 = new HashMap<Character, Integer>();

			//converted strings into array of chars char[] strS = s.toCharArray();
			char[] strS = S.toCharArray();
			char[] strT = T.toCharArray();

			for(char c : strS) 
			{
				if(s1.containsKey(c)) 
				{

					// If char is present in charCountMap,
					// incrementing it's count by 1
					s1.put(c, s1.get(c) + 1);
				}

				else 
				{
					// If char is not present in charCountMap,
					// putting this char to charCountMap with 1 as it's value
					s1.put(c, 1);
				}
			}

			for(char c : strT) 
			{
				if(t1.containsKey(c)) 
				{

					// If char is present in charCountMap,
					// incrementing it's count by 1
					t1.put(c, t1.get(c) + 1);
				}

				else 
				{
					// If char is not present in charCountMap,
					// putting this char to charCountMap with 1 as it's value
					t1.put(c, 1);
				}
			}

		}

		return true;
	}

	public static void main(String[] args)
	{
		validAnagram caller = new validAnagram();

		String s = "rat";
		String t = "up";

		boolean statement  = caller.isAnagram(s, t);

		System.out.println(statement);
	}
}

//time complexity O(s + t)
