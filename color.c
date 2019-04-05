#include <stdio.h>
//Ricky Lai color text practice 2019/4/5
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define DARK_GRAY            "\033[01;30m"
#define ANSI_COLOR_RESET    "\x1b[0m"

int main () {

  printf(RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
  printf(GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
  printf(YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
  printf(BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
  printf(MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
  printf(CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");
  printf(DARK_GRAY "This text is DARK_GRAY" ANSI_COLOR_RESET "\n");

  return 0;
}