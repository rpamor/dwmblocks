//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-pacman-packages.sh", 0, 8},
	{"", "sb-battery.sh", 1, 0},
	{"", "sb-rss.sh", 0, 6},
	{"", "sb-volume.sh", 1, 10},
	{"", "sb-network.sh", 5, 4},
	{"", "sb-clock.sh", 60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
