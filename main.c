#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

static void daemonize(void)
{
	pid_t pid,sid;
	
	if(getppid()==1)return;
	
	pid = fork();
	if(pid<0){
		exit(EXIT_FAILURE);	
	}

	if(pid<0){
		exit(EXIT_SUCCESS);
	}

	umask(0);
	sid=setsid();
	if(sid<0){
		exit(EXIT_FAILURE);
	}

	printf("test1");
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);	
	printf("test2");
}

int main (int argc, char *argv[]){
	FILE *a;
	a = fopen("output2.txt","w"); 
	daemonize();
	while(1){
		fprintf(a,"test4\n");
		printf("test5");
		sleep(10);
	}
	return 0;
}


