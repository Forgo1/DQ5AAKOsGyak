#include	<stdio.h>
#include 	<unistd.h>
#include	<stdlib.h>

 int main(void)
  {

int pi_d, pid;


pi_d =fork();
if (pi_d == 0){
	
	printf("gyermek process B:\n pid=:%d\n ppid:%d\n", getpid(), getppid());
	system("date");
	exit(0);
}
	if(pi_d > 0){
	
	pid =fork();
	
	if(pid > 0){
		printf("\n szulo process: \n pid:%d \n ppid:%d \n", getpid(), getppid());
		exit(1);
		}
		else if(pid ==0){
		printf("gyerek process A:\n pid:%d\n ppid:%d \n", getpid(), getppid());
		system("ps");
		exit(0);
			}
	
	
		}
		
	}











