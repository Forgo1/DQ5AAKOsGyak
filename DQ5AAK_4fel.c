#include	<stdio.h>
#include 	<fcntl.h>
#include	<stdlib.h>

 main()
  {

int  status,pid,ppid,gpid;


ppid =getpid(); /*szulo pidjet elkaptuk*/
pid =fork();
if (pid == 0)
{/*innen gyerek process*/

printf("\n gyerek pid = %d\n", getpid());
status =execl("/home/forgo/child2",0);
if (status == -1)
{
perror ("szulo execl bukott");
exit(-1);
}

}
/*innen szulo*/
printf("\n %d.sz.szulo var a %d.sz.gyerekre.\n",ppid,pid );
if( pid!= wait(&status)) perror("szulo-varakozasi hiba");
 
}









