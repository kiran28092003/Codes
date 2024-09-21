class Demo
{
	public static void main(String []args)throws Exception
	{
		java.io.BufferedReader br = new java.io.BufferedReader(new java.io.InputStreamReader(System.in));
		System.out.println("Enter your name");
		System.out.println(br.readLine());
		System.out.println("Enter your roll_no");
		System.out.println(br.readLine());
	}
}