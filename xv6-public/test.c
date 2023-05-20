#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char **argv){
	int p;
	printf(1, "test start\n");
	p = fork();

	if (p != 0)
		printf(1, "process %d my ticket %d\n", getpid(), gettickets());
	else
		printf(1, "child process %d, my ticket %d\n", getpid(), gettickets());
	exit();
}
