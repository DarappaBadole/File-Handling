#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
  char Fname[20];
  int fd =0;

  printf("Plese enter file name that you want to open\n");
  scanf("%s",&Fname);

  fd = open(Fname,O_RDWR);
  if(fd==-1)
  {
    printf("Unable to create file\n");
    return -1;
  }

  else
  {
    printf("File is successfully open with FD %d\n",fd);

  }

  write(fd,"Marvellous",10);

  close(fd);
 

    return 0;
}