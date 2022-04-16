#include	<sys/types.h>
#include	<sys/wait.h>
#include	<stdio.h>
#include	<stdlib.h>

int
main(void)
{
	int		status;

	if ( (status = system("tree")) < 0)
		perror("system() error");
	pr_exit(status); 	/* várhatóan 0 */

	if ( (status = system("nosuchcommand")) < 0)
		perror("system() error");
	pr_exit(status);	/* várhatóan nem 0 */

	if ( (status = system("who; exit 44")) < 0)
		perror("system() error");
	pr_exit(status);	/* status = 44 */

	exit(0);
}

void
pr_exit(int status)
{
	if (WIFEXITED(status))
		printf("Normális befejezõdés, visszaadott érték = %d\n",
				WEXITSTATUS(status));
	else 
	if (WIFSIGNALED(status))
		printf("Abnormális befejezés, a szignál sorszám = %d\n",
				WTERMSIG(status));
}



