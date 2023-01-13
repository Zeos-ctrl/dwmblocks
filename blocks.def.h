//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {"",     "/home/zeos/.config/dwmblocks/scripts/sb_volume",          5,    10},
    {"",     "/home/zeos/.config/dwmblocks/scripts/sb_power",               30,    13},
    {"",     "/home/zeos/.config/dwmblocks/scripts/sb_network",            30,    15},
    {"",     "/home/zeos/.config/dwmblocks/scripts/sb_ip",            30,    0},

	{"", "date '+%b %d (%a) %I:%M%p'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 6;
