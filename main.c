#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

static void daemonize(void)
{

}

int main (int argc, char *argv[]){
	daemonize();
	return 0;
}


