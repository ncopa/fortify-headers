#include "common.h"

#include <sys/socket.h>

int main(int argc, char** argv) {
  char buffer[12] = {0};

  CHK_FAIL_START
  sendto(0, buffer, 14, 0, NULL, 0);
  CHK_FAIL_END

  puts(buffer);
  return ret;
}
