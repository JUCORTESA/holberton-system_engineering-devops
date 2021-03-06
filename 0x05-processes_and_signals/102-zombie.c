#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * infinite_while - infinite loop
 * Return: no return
**/
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - creates 5 zombie processes
 * Return: 0
**/
int main(void)
{
	pid_t child;
	int i;

	for (i = 0; i < 5; i++)
	{
		child = fork();
		if (!child)
		{
			return (0);
		}
		else
			printf("Zombie process created, PID: %d\n", child);
	}
	infinite_while();
	return (0);
}
