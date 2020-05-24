public class ferningstölur
{
	public static void main (String[] args)
	{
		System.out.println(summaíveldi(100)+"  -  "+summaveldi(100)+"  =  "+(summaíveldi(100)-summaveldi(100)));	
	}
	public static int summaveldi(int fjöldi)
	{
		int summa =0;
		for(int i=1; i<=fjöldi; i++)
		summa+=Math.pow(i,2);
		return summa;
	}
	public static int summaíveldi(int fjöldi)
	{
		int summa=0;
		for(int i=1; i<=fjöldi; i++)
		summa+=i;
		summa=(int)Math.pow(summa,2);
		return summa;
	}
}

