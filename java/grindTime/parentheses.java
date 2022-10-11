import java.io.*;
import java.util.*;

public class parentheses 
{
	public boolean isValid(String s)
	{
		Stack<Character> stack = new Stack<Character>();

		char[] strs  = s.toCharArray();

		if(s.length() % 2 != 0) //checks to make sure string isn't empty
		{
			return false;
		}

		for(int i = 0; i < strs.length; i++)
		{
			if(strs[i] == '(' || strs[i] == '{' || strs[i] == '{' )
			{
				stack.push(strs[i]);	 //pushes left character
			}

			else if(strs[i] == ')' || strs[i] == ']' || strs[i] == '}') //checks if it closes parentheses
			{
				if(stack.empty() )
				{
					return false; 
				}

				if(strs[i] == '}' && stack.peek() == '{')
				{
					stack.pop();
				}

				else if(strs[i] == ')' && stack.peek() == '(')
				{
					stack.pop();
				}

				else if(strs[i] == ']' && stack.peek() == '[')
				{
					stack.pop();
				}

				else 
				{
					return false;	
				}		
			}
		}

		return stack.isEmpty();
	}

	public static void main(String[] args)
	{
		String s = "()";

		parentheses caller = new parentheses();

		caller.isValid(s);

	}
}
