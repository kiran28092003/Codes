interface Demo
{
	static void fun()
	{
		System.out.println("Using static method interfacing");
	}
}
class AbstractionDemo
{
	public static void main(String []args)
	{
		Demo.fun();
	}
}