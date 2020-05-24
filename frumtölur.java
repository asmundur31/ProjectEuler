public class frumtölur
{
	public static void main (String[] args)
	{
		System.out.println(frumtala(10001));
	}
	public static int frumtala(int nr)
	{
		boolean [] tölur = new boolean[nr*16];
		for(int i=2; i<nr*16; i++)
		{
			if(!tölur[i])
			{
				for(int j=2; j<i; j++)
				{
					if(i%j==0)
					{
						tölur[i]=true;
						j=i;
					}
				}
			}
		}
		tölur[0]= true;
		tölur[1]= true;
		int teljari = 1;
		int i = 3;
		while(teljari<nr)
		{
			if(!tölur[i])
			teljari++;
			i+=2;
		}
		if(i==3)
		i=4;
		return i-2;
	}
}
