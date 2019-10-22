#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main()
{
  printf(1, "syscall getpid() was called %d times.\n", getpidcount());
  exit();
}