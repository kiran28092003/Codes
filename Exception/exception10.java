class Demo 
{
    public static void main(String []args)
    {
        try
        {
            int a =Integer.parseInt(args[0]);
            try{
                int []arr = new int [a];
                }
                catch(NegativeArraySizeException nae)
                {
                    System.out.println("negative value");
                }
        }

        catch(ArrayIndexOutOfBoundsException ab)
        {
            System.out.println("out of bound");
        }
        catch(NumberFormatException nfe)
        {
            System.out.println("String type not allowed");
        }
        }
        
    }
        
