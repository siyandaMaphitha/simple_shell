#include <stdio.h>
#include <unistd.h>

/**
 * main- pid
 * Return: 0 Success
 */

int main ()
{
	pid_t  myparent_pid;

	myparent_pid = getppid();
	printf("%u\n", myparent_pid);

	return (0);
}
