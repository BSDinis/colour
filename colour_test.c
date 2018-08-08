/*
 * test the colour.h header
 */

#include <colour.h>
#include <stdio.h>

int main()
{
  printf(BOLDBLACK "Welcome, this is a small test of the " 
      BOLDRED "c" 
      BOLDGREEN "o"
      BOLDYELLOW "l"
      BOLDCYAN "o"
      BOLDMAGENTA "u"
      BOLDBLUE "r"
      BACKWHITE BOLDBLACK ".h"
      RESET BOLDBLACK " header file\n" RESET);

  printf(BACKRED WHITE "You can change your terminals background colour on the fly\n" RESET RESET);
  printf("And use " BOLDBLUE "bold fonts" RESET " or " BLUE "normal fonts\n");

  return 0;
}

