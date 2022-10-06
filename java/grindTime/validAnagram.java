import java.util.HashMap;
import java.io.*;
import java.util.*;

//use two arrays
//sort those two arrays
//compare those two arrays
public class validAnagram
{
	public void isAnagram(String s, String t)
	{
		if(s.length() != t.length() )
		{
			//	return false;

			System.out.println("bababooy");
		}

		else
		{
			// made two hash mapes for each string
			HashMap<Character, Integer> s1 = new HashMap<Character, Integer>();
			HashMap<Character, Integer> t1 = new HashMap<Character, Integer>();

			//converted strings into array of chars char[] strS = s.toCharArray();
			char[] strS = s.toCharArray();
			char[] strT = t.toCharArray();

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

			for(Map.Entry entry : s1.entrySet() )
			{
				System.out.println(entry.getKey() + " " + entry.getValue() );
			}

			for(Map.Entry entry : t1.entrySet() )
			{
				System.out.println(entry.getKey() + " " + entry.getValue() );
			}

		}

		//return true;
	}

	public static void main(String[] args)
	{
		validAnagram caller = new validAnagram();

		String s = "rat";
		String t = "up[";

		caller.isAnagram(s, t);
	}
}
//time complexity O(s + t)
