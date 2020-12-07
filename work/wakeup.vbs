'corp computer will lock screen automatic if i dont interactive with it in five minites
'so after 299 seconds, press the NUMLOCK
'abnormal in some scenes like cmd
Set objShell = CreateObject("Wscript.Shell") 
do
    WScript.Sleep 299000
    objShell.SendKeys "{NUMLOCK}"               
loop  