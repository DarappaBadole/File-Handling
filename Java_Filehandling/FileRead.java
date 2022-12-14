import java.io.*;

class FileRead
{
  public static void main(String Arg[]) throws Exception
  { 
     FileInputStream fobj = new FileInputStream("Marvellous1.txt");
     int i = 0;

     while((i=fobj.read()) !=-1)
     {
        System.out.print((char)i);

     }
     System.out.println();
     fobj.close();
     

  }





}