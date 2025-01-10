interface Demo
{
	default void fun()
	{
		System.out.println("Using default interface");
	}
}
class Test impliments Demo
{
	
}
class AbstractionDemo
{
	public static void main(String []args)
	{
		Test t = new Test();
		t.Demo();
	}
}
