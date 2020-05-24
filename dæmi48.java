public class dæmi48
{
	public static void main(String[] args)
	{
		long sum = 0;
		for(int i=1; i<=1000; i++)
		{
			sum+=fall(i);
			System.out.println(fall(i));
		}
		System.out.println(sum);
	}
	public static double fall(int x)
	{
		double summa=1;
		for(int i=0; i<x; i++)
		{
			summa=(summa*x)%Math.pow(10,10);
		}
		return summa;
	}
}
