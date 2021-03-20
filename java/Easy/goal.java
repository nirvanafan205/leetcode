/*
 You own a Goal Parser that can interpret a string command.
 The command consists of an alphabet of "G", "()" and/or "(al)" in some order. 
 The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al".
 The interpreted strings are then concatenated in the original order.
*/

public class goal
{
	public void interpret(String command)
	{
		String output = "";

		for(int i = 0; i < command.length(); i++)
		{
			char c = command.charAt(i);

			if(c == 'G')
			{
				output += c;
			}

			for(int b = i + 1; b < command.length(); b++)
			{
				char a = command.charAt(b);

				if(c == '(' && a == ')')
				{
					a = 'o';

					output += a;
					break;
				}

				else if(c == '(' && a == 'a')
				{
					char l = 'l';
					a = 'a';
					output += a;
					output += l;
					break;
				}
			}

		}

		System.out.println(output);
	}

	public static void main(String[] args)
	{
		goal caller = new goal();

		String input = "G()(al)";

		caller.interpret(input);
	}
}	
