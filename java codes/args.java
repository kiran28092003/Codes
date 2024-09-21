class Demo
{
	public static void main(String []args)
	{
		System.out.println(Integer.parseInt(args[0])+Integer.parseInt(args[1]));
		System.out.println(Float.parseFloat(args[0])+Float.parseFloat(args[1]));
		System.out.println(args[0].charAt(0));
		System.out.println(args[0]+args[1]);
		for(int i=0;i<args.length;i++)
		{
			System.out.println(args[i]);
		}
	}
}