# t1x-dc-disasm
Tool for decompiling The Last Of Us: Part I scripts

# Tutorial
To decompile a script first find a script file that starts with `ss-\<name>.bin`
- The program will look for following folder: `sid1/sidbase.bin` in the same directory of the executable so **make sure its there otherwise there will only be a partial resolution of the stringIds**
- In this example we\'re going to use `ss-fp-test.bin`
Open the terminal and run the following command:
```
.\t1x-dc-disasm.exe .\ss-fp-test.bin > .\ss-fp-test.txt
```

This will redirect the output of the program to the file ss-fp-test.txt

# Notes
- Please let me know if a state name is not resolved.

# Special Thanks
- Chandler Threepwood for providing the files, a list of all the states, spawners and region names