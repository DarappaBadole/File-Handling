#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  char Fname[20];
  int fd =0;
  char Data[20];


  printf("Plese enter file name that you want to open\n");
  scanf("%s",&Fname);

  fd = open(Fname,O_RDWR);          //O_RDONLY     O_WRONLY    O_RDWR
  if(fd==-1)
  {
    printf("Unable to create file\n");
    return -1;
  }

  else
  {
    printf("File is successfully open with FD %d\n",fd);

  }


  read(fd,Data,10);
  printf("Data fromfile is:%s",Data);

  close(fd);
 

    return 0;
}