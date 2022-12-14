import java.io.*;

class CreateFile
{
  public static void main(String Arg[]) throws Exception
  {
    File fobj = new File("Marvellous1.txt");
    if(fobj.createNewFile())
    {
        System.out.println("File created successfullly");

    }

    else
    {
        System.out.println("Unable to create file");
    }

  }





}