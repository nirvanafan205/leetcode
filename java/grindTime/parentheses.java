import java.io.*;
import java.util.*;

public class parentheses 
{
	void isValid(String s)
	{
		Stack<Character> stack = new Stack<Character>();

		char[] strs  = s.toCharArray();

		if(s == "")
		{
			//output false
		}

		for(int i = 0; i < strs.length; i++)
		{
			if(strs[i] == '(' || strs[i] == '{' || strs[i] == '{' )
			{
				stack.push(strs[i]);	
			}

			else if(strs[i] == ')' || strs[i] == ']' || strs[i] == '}')
			{
				if(stack.empty() )
				{
					//return false
				}
			}
		}
	}

	public static void main(String[] args)
	{
		String s = "()";

		parentheses caller = new parentheses();

		caller.isValid(s);

	}
}
