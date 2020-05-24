public class deilar
{
	public static void main (String[] args)
	{
		for( int i=0; i<1000000000; i=i+10)
		if(i%5==0 && i%7==0 && i%9==0 && i%11==0 && i%13==0 && i%16==0 && i%17==0 && i%19==0)
		System.out.println(i);
	}
}
