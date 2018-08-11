/*
 * test the colour.h header
 * test the no_colour.h header
 */


// this way, you can toggle between a colorized and non-colorized
// output without making any other changes to the program
#define COLOUR 1

#if COLOUR == 1
#include <colour.h>
#else 
#include <no_colour.h>
#endif

#include <stdio.h>

int main()
{
  printf(RESET BOLDBLACK "Welcome, this is a small test of the " 
      BOLDRED "c" 
      BOLDGREEN "o"
      BOLDYELLOW "l"
      BOLDCYAN "o"
      BOLDMAGENTA "u"
      BOLDBLUE "r"
      BACKWHITE BOLDBLACK ".h"
      RESET BOLDBLACK " header file\n" RESET);

  printf(WHITE BACKRED "You can change your terminals background colour on the fly\n" RESET RESET);
  printf(RESET "And use " BOLDBLUE "bold fonts" RESET " or " BLUE "normal fonts\n" RESET);

  return 0;
}

