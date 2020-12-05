//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define WIDGET_PATH "~/.dwm/bin/"
static const Block blocks[] = {
    /*Icon*/ /*Command*/                                            /*Update Interval*/ /*Update Signal*/
	{"", WIDGET_PATH "volume",                                      30,                 0},
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,                 0},
	{"", WIDGET_PATH "cpu",                                         5,                  0},
	{"", WIDGET_PATH "ip",                                          60,                 0},
	{"", WIDGET_PATH "weather",                                     300,                0},
	{"", "date '+%a %d %b %Y %H:%M'",                               5,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
