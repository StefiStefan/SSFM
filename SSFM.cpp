#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::string;

string checknfill(int* a, string* b)
{
    int start = 0;
    int now = 0;
    string asd = *b;
    bool isit = false;
    for (int i = 0; i < *a; i++)
    {
        if (asd[i] == ' ')
        {
            isit = true;
        }
        if (asd[i] == '\\')
        {
            now = i + 1;
            if (isit)
            {
                asd.insert(start, "\"");
                asd.insert(now, "\"");
                start = i + 1;
                isit = false;
            }
            else { now = i + 1; }
        }
    }
    return asd;
}

int main()
{
    string lines[3] = {""};
    std::ifstream config;
    config.open("config.cfg");
    std::getline(config, lines[0]);
    system(lines[0].c_str());
    PlaySound(TEXT("c_walk.wav"), NULL, SND_ASYNC);
    cout << "Welcome to Stefan's Shitty File Mover, where my program is your lawn mower! ;)\n((Upon any error with valid paths, most likely your configuration is invalid you monkey))\nPlaying right now: Kurupt - C Walk (excerpt)\n";
    int x, i = 0;
    int* p1;
    string* p2;
    while (std::getline(config, lines[2]))
    {
        if (i == 0 || i == 1)
        {
            lines[i] = lines[2];
            x = lines[i].length();
            p1 = &x;
            p2 = &lines[i];
            lines[i]=checknfill(p1, p2);
        }
        i++;
    }
    config.close();
    cout << "\n\n\n Config Read-in complete \n\n\n\n";
    cout << lines[0] << "\tDestination Folder\n" << lines[1] << "\t\t\tTarget Folder\n" << lines[2] << "\t\t\t\t\t\tfile type\n";
    cout << "\n\n\nIs the configuration the desired one? (y/n)\n\n\n";
    string asd; cin >> asd;
    if (asd == "y" || asd == "yes" || asd == "Y" || asd == "igen")
    {
        lines[0] = "move /y " + lines[0] + lines[2] + " " + lines[1]+" >nul";
        cout << "\n\n Moving files!\n\n";
        system(lines[0].c_str());
        cout << "File moving is complete!\n\n";
        system("pause");
    }
    else
    {
        cout << "Reconfigure! The applicaton will exit!\n";
        system("pause");
    }
}