public class töluhrópmerkt
{
	public static void main (String[] args)
	{
		int summa=0;
		for(int i=3; i<100000000; i++)
		{
			if(i==sum(i))
			{
				System.out.println(i);
				summa+=i;
			}
		}
		System.out.println(summa);
	}
	
	
	public static int sum(int a)
	{
		int summa=0;
		int tala=1;
		while(a>0)
		{
			if(a%10!=0)
			{
				for(int i=1; i<=a%10; i++)
					tala*=i;
			}
			else tala=1;
			summa+=tala;
			tala=1;
			a=a/10;
		}
		return summa;
	}
}
