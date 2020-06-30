//Given an array of unique integers salary where salary[i] is the salary of the employee i.
//Return the average salary of employees excluding the minimum and maximum salary.

public class salary
{
	public double average(int[] salary)
	{
		int max = salary[0];
		int min = salary[0];

		for(int i = 0; i < salary.length; i++)
		{
			if(salary[i] > max)
			{
				max = salary[i];
			}

			else if(salary[i] < min)
			{
				min = salary[i];
			}
		}

		int[] newArray = new int[salary.length - 2];

		for(int j = 0, k = 0; j < salary.length; j++)
		{
			if(salary[j] == max || salary[j] == min)
			{
				continue;
			}

			newArray[k++] = salary[j];
		}

		int n = newArray.length;
		double sum = newArray[0];

		for(int a = 1; a < newArray.length; a++)
		{
			sum += newArray[a];
		}

		double mean = sum / n;

		return mean;
	}

	public static void main(String[] args)
	{
		int salary[] = { 4000, 3000, 1000, 2000 };

		salary obj = new salary();

		obj.average(salary);
	}
}
