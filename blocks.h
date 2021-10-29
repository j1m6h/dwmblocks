//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/src/dwmblocks/scripts/volume.sh", 		0, 		10},
	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		17},
	//{"", "/home/joshua/suckless/dwmblocks/scripts/memory.sh",		30,		18},
	{"", "~/src/dwmblocks/scripts/cputemp.sh",		5,		15},
	//{" ", "/home/joshua/suckless/dwmblocks/scripts/battery.sh",		5,		26},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		5},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
