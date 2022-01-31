# COMP6841_Rubber_Ducky

## Summary

- Recreated a rubber ducky using arduino micro pro and a USB to Micro-B adapter which enables us to connect arduino as a USB to the computer.

- Arduino Micro Pro board has a USB transceiver inside 34U4 which allows us to connect.

- Developed 4 payloads for my rubber ducky. Following is a brief description about them.

1. Open notebook using windows Run and print Hello World: <br>
   a. This was really a simple payload\script in order to complete the Keyboard emulation and automatic delivery of payloads.

 2. Steel Wifi Password: <br>
   a. This payload first finds the SSID of the current wifi and sends the output to a Temp.txt file. Then it attaches Temp.txt file and sends an email. In the end, it will delete the Temp.txt file to cover our tracks.

 3. Bypass UAC and create an admin account: <br>
   a. This payload first bypasses the UAC. It will then run powershell as an admin and use the net command on powershell to create a user named ‘ADMIN’ and give it admin.rights This script also uses windows registry to hide the account from windows lock screen. In the end, it will delete the entries of windows run by deleting the entries from windows registry.

 4. Bypass UAC, Run logger.exe and Create a Task using Task Scheduler: <br>
   a. This payload again will first bypass the UAC. It will change its directory to %userprofile% and then download 3 files from my google drive. The 3 files downloaded are logger.exe, and 2 powershell scripts. Logger.exe is a keylogger written in python using pynput library and then converted to an exe using pyinstaller. The other two powershell scripts are responsible to stop the logger.exe process, send an email with an attachment file ‘Key_log.txt’, delete ‘Key_log.txt’ and then start logger.exe again. The payload then creates a Task using Task scheduler in powershell. The task will be responsible to run the powershell script after every x minutes which we can be set. The thinking behind creating a task was to get an email of key_log.txt after every x minutes.
