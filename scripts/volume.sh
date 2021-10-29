awk -F"[][]" '/Left:/ { print "Vol: "$2 }' <(amixer sget Master)
