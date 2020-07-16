//Given an integer number n, return the difference between the product of its digits and the sum of its digits. 

import java.util.*;

public class sub_prod
{
	public int subtractProductAndSum(int n)
	{
		List<Integer> digit = new ArrayList<Integer>();

		while(n > 0)
		{
			digit.add(n % 10);

			n = n / 10;	
		}

		int sum_ = 0;

		int product = 1;

		for(int sum : digit)
		{
			sum_ += sum;
			product *= sum;
		}

		int result = product - sum_;
		
		return result;
	}

	public static void main(String[] args)
	{
		int n = 234;

		sub_prod obj = new sub_prod();

		obj.subtractProductAndSum(n);
	}
}
