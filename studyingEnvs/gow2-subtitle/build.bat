@echo off

C:\Users\allan\Desktop\tools\ps2sdk\ee\bin\make.exe

if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto error
)

del .\src\*.o

C:\Users\allan\Desktop\tools\elf_injector.exe -e ./gow2.elf -n ./gowplugin.elf -o ./SCUS_974.81 -a 0

goto sucess

:error
pause

:sucess
exit