/* vim: set sw=2 expandtab tw=80: */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <libtock/interface/console.h>
#include <libtock-sync/interface/console.h>
#include <libtock-sync/services/alarm.h>

extern int (*lib_func)(int x);

int app_glob = 10;

int main(void) {

  while (1) {
    int result = lib_func(app_glob);
    printf("lib_func(%d) = %d\n", app_glob, result);

    libtocksync_alarm_delay_ms(1000);
  }

  return 0;
}
