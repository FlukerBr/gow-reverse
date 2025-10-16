@echo off

C:\Users\allan\Desktop\tools\ps2sdk\ee\bin\make.exe

if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto error
)

del .\src\*.o
del .\src\hooks\*.o

copy .\gowplugin.erl "D:\Download\God of War II (USA)\host\gowplugin.erl"

@REM C:\Users\allan\Desktop\tools\elf_injector.exe -e ./gow1.elf -n ./gowplugin.erl -o ./SCUS_973.99 -a 0

goto sucess

:error
pause

:sucess
exit