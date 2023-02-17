#include <stdio.h>
#include <unistd.h>
/**
  * main -ppid
  * Return: Always 0
  */
int main(void)
{
	pid_t myppid;

	myppid = getppid();
	printf("%u\n", myppid);
	return (0);
}
