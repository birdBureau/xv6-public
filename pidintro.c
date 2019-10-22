#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main()
{
  printf(1, "It's me, process %d.\n", getpid());
  exit();
}
