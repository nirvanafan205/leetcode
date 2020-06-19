public class single_number
{
    public static void main(String[] args)
    {
        int array[] = { 2, 2, 5, 2, 2 };

        int target;

        for(int i = 0; i < array.length; i++)
        {
            int count = 0;

            for(int j = 0; j < array.length; j++)
            {
                if(array[i] == array[j])
                {
                    count++;
                }
            }

            if(count == 1)
            {
                target = array[i];

                System.out.println("Your single number is " + target);
            }
        }
    }
}
