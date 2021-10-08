amixer get Master | awk '$0~/%/{print "Vol: " $4}' | tr -d '[]'
