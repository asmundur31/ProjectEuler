public class þáttatölu
{
	public static void main (String[] args)
	{
		String tala="600851475143";
		int k = 0;
		for(int i=1; i<3000000; i++)
		{
			if(tala.charAt(i)%i==0)
			{
				System.out.print(i+"      ");
				k=tala/i;
				System.out.println(k);
			}
			
		}
		
	}
}
