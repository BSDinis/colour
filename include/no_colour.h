/*
 * no_colour.h
 *
 * compatibility header that defines the same preprocessor macros
 * as colour.h, but sets them all to nothing, so that you can easily
 * toggle between the two in your headers
 */

/* ANSI Escape Sequences */
#define RESET   

#define BLACK         /* Black */
#define RED           /* Red */
#define GREEN         /* Green */
#define YELLOW        /* Yellow */
#define BLUE          /* Blue */
#define MAGENTA       /* Magenta */
#define CYAN          /* Cyan */
#define WHITE         /* White */
	
#define BOLDBLACK         /* Bold Black */
#define BOLDRED           /* Bold Red */
#define BOLDGREEN         /* Bold Green */
#define BOLDYELLOW        /* Bold Yellow */
#define BOLDBLUE          /* Bold Blue */
#define BOLDMAGENTA       /* Bold Magenta */
#define BOLDCYAN          /* Bold Cyan */
#define BOLDWHITE         /* Bold White */

#define BACKBLACK	 /* Background Black */
#define BACKRED		 /* Background Red */
#define BACKGREEN	 /* Background Green */
#define BACKYELLOW	 /* Background Yellow */
#define BACKBLUE	 /* Background Blue */
#define BACKMAGENTA	 /* Background Magenta */
#define BACKCYAN	 /* Background Cyan */
#define BACKWHITE	 /* Background White */
