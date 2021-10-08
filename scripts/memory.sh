percent="$(free | awk '/^Mem/ { print $3"*100/"$2 }' | bc)"
echo "Mem: ${percent}%"
