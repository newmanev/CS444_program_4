#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	int i;

	for (i = 2; i < argc; i++) {
		renice(atoi(argv[i]), atoi(argv[1]));
	}

	exit();
}