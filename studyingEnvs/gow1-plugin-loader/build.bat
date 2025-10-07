@echo off

C:\Users\allan\Desktop\tools\ps2sdk\ee\bin\make.exe

if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto error
)

del .\*.o

C:\Users\allan\Desktop\tools\elf_injector.exe -e ./gow1.elf -n ./gowplugin.elf -o ./SCUS_973.99 -a 0

goto sucess

:error
pause

:sucess
exit