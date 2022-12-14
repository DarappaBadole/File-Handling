import java.io.*;

class WriteFile
{
  public static void main(String Arg[]) throws Exception
  { 
     
     FileOutputStream fobj = new FileOutputStream("Marvellous1.txt");

     String Data = "Marvellous Infosystems Pune";
     
     byte bdata[] = Data.getBytes();

     fobj.write(bdata);
     fobj.close();
   

  }





}