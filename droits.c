#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int uid  = getuid();
  int euid = geteuid();
  int gid  = getgid();
  int egid = getegid();
  printf ("UID réel     : %u\n", uid);
  printf ("UID effectif : %u\n", euid);
  printf ("GID réel     : %u\n", gid);
  printf ("GID effectif : %u\n", egid);
  return 0;
}
