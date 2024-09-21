class Array
{
    public static void main(String []args)
    {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int[][] arr=null;
        arr=new int[6][];
        arr[0]=new int[3];
        arr[1]=new int[2];
        arr[2]=new int[6];
        arr[3]=new int[1];
        arr[4]=new int[4];

        for(int i=0;i<arr.length;i++)
        {
             for(int j=0;j<arr[i].length;j++)
             {
                System.out.print(" * "+"");
             }
             System.out.println();
        }
    }
}