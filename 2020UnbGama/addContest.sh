mkdir newdir
num=$(echo */ | wc -w)
mv newdir IPC$num
cat sample.txt > IPC$num/README.md
