#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	if (argc != 3) {
		printf(2, "Usage: %s <pid> <new nice value>\n", argv[0]);
		exit();
	}

	renice(atoi(argv[2]), atoi(argv[3]));

	exit();
}