#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	int fd = 0 ;
	if(argc != 2)
	{
		printf("Error:Insufficient arguments");
		return -1;
	}

	fd = open(argv[1], O_RDWR);
	if(fd == -1)
	{
		printf("Error : Unable to open file");
		return -1;	
	}

	printf("File gets succesfully opned with FD : %d\n",fd);
	close(fd);
	return 0;
}

