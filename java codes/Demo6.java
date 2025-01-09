abstract class Vehicle
{
	abstract void Engine();	
	abstract void Wheels();
	abstract void Breaks();
}
abstract class Car extends Vehicle
{
	void Breaks()
	{
	}
	void  Wheels()
	{
	}
}
abstract class Bus extends Vehicle
{	
	void Break()
	{
	}
	void Wheels()
	{
	}
}
class Odo extends Bus
{
	void Engine()
	{
	}
}
class Demo
{
	public static void main(String []args)
	{
		Vehicle Odo = new Vehicle();
		Odo.Engine();
	}
}
	
