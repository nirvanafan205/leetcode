/*Write a program that outputs the string representation of numbers from 1 to n.
 *But for multiples of three it should output “Fizz” instead of the number and 
 *for the multiples of five output “Buzz”. For numbers which are multiples of 
 *both three and five output “FizzBuzz”
 */

import java.util.*;

public class fizz_buzz
{
	public List<String> fizzBuzz(int n)
	{
		List<String> array = new ArrayList<String>();

		for(int i = 1; i <= n; i++)
		{
			if(i % 3 == 0 && i % 5 == 0)
			{
				String str = "FizzBuzz";

				array.add(str);
			}

			else if(i % 3 == 0)
			{
				String str = "Fizz";

				array.add(str);
			}

			else if(i % 5 == 0)
			{
				String str = "Buzz";

				array.add(str);
			}

			else
			{
				String str = Integer.toString(i);	
				array.add(str);
			}
		}

		return array;
	}

	public static void main(String[] args)
	{
		int n = 15;
		
		fizz_buzz obj = new fizz_buzz();

		obj.fizzBuzz(n);
	}
}
