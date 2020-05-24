public class dæmi28
{
	public static void main(String[] args)
	{
		int summa=0;
		int j=0;
		for(int i=0; i<500; i++)
		{
			summa+=2*(12+i*26+j*16);
			j=j+i;
		}
		summa+=1;
		System.out.println(summa);
	}
}
