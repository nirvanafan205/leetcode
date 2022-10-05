import java.util.HashMap;

public class validAnagram
{
	public boolean isAnagram(String s, String t)
	{
		HashMap<Character, Integer> S = new HashMap<Character, Integer>();
		HashMap<Character, Integer> T = new HashMap<Character, Integer>();

		return false;

	}

	public static void main(String[] args)
	{
		String s = "anagram";
		String t = "nagaram";

		validAnagram obj = new validAnagram();

		obj.isAnagram(s, t);
	}
}
