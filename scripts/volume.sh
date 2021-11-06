awk '/Mono:/ {print "Vol "$4}' <(amixer sget Master)
