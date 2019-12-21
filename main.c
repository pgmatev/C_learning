//--------------------------------------------
// NAME: Petar-Gabriel Matev
// CLASS: XIb
// NUMBER: 22
// PROBLEM: #2
// FILE NAME: main.c
// FILE PURPOSE:
// shell
//---------------------------------------------

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv)
{
	int init_size = strlen(argv);
	char delim[] = " ";

	char *ptr = strtok(argv, delim);

    pid_t pid;
    int status;

	while(ptr != NULL)
	{
        while(1){
            pid = fork();
            if(pid == 0){
                if(execl(ptr, ptr+1) != 0){
                    perror(ptr);
                    return -1;
                }
            }   
            else if(pid == -1) {
                perror("fork");
            } else {
                if(waitpid(pid, &status, 0) != pid) {
                    perror("");
                    return -1;
                }
                sleep(2);
            }
        }
		ptr = strtok(NULL, delim);
	}
	return 0;
}