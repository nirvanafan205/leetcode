import java.util.*;
import java.lang.*;

class compareArrays 
{
	void arrayStringsAreEqual(String[] word1, String[] word2)
	{
		boolean answer;

		String delimiter = "";
		String delimiter_ = "";

		String result = String.join(delimiter, word1);

		String result_ = String.join(delimiter_, word2);

		if(result.equals(result_) )
		{
			answer = true;
		}
		
		else
		{
			answer = false;
		}

	}

	public static void main(String[] args)
	{
		compareArrays caller = new Gfg1();

		String[] first = {"ab", "c"};
		String[] second = {"a", "bc"};

		caller.arrayStringsAreEqual(first, second);

	}     
} 
