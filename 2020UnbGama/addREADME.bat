mkdir newdir
for /f %%a in ('dir /b /ad %folder%^|find /c /v "" ') do set num=%%a
ren newdir IPC%num%
type sample.txt > IPC%num%/README.md