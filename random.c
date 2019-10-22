#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	int r;

	if (argc != 1) {
		printf(2, "Usage: %s takes no arguments\n", argv[0]);
		exit();
	}

	r =  rrand();
	printf(1, "random number is: %d\n", r);

	exit();
}
