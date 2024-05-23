# SSFM #SorryForMyEnglish
Windows-only terminal based file mover. Using built-in windows command.
This file mover isn't beneficial on low amount of files, rather for large amount of (certain type of) files.
For me, it was due to videos being converted, and they had a '-converted' written in the name of the file, so
i had a large quantity of files, which of every named so needed. So i created this, that based on a config file
actually moves around every desired file i'd like. Also, i'm a beginner """programmer""", so i created this as a practice.
Feel free to roast me, if it helps me to learn useful things in programming. ty <3

About usage: 
this file mover actually uses the windows terminal command: "move /y <destination> <target>" syntax, only i always misspellt it and 
I could've broke my monitor bevause of the rage, that it wasn't working. Therefore i wrote this piece of sh*t. 

U need to configure the config.cfg (creative naming, thank you), and then run the SSFM.exe. You'll see what does SSFM stand for. 
Config.cfg structure(the ; indicates my comment here, do not include in it):
color XX  ; windows terminal color, the XX is either two number or two letter, or the mix of the two, cannot be the same (based on microsoft's notes)
pathFROM  ;The folder you're getting the files out
PathTO    ;The folder you're sending the files to, obviously. 
*.mp4     ;The file name. Can be folder, type only folder name(make sure the PathFROM isn't the folder that you're trying to move). '*' represents a wildcard,
            can be any character any length of. (*.mp4 will move every such file. *converted.mp4 will move every file that ends with converted.mp4,
             *converted*.mp4 will move every mp4 file that name's contains converted and such.'?' also works the same, only it is a single character)
             
             
Regulations: After every path you have to include a backslash(eg: D:\replay isn't valid, D:\replay\ is valid)
              files containing spaces, u can use the '*' character and the last word or instead spaces u can use the '?'
              
Music: Kurupt- C Walk, All music rights belong to their respective owners.
         Can be changed, regulation: .wav file, named as c_walk, or renamed in the source code.
         
         
         
         Feel free to use, hereby i declare this piece if rotten sh*t OpenSource.
