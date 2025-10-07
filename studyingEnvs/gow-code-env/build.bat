@echo off

C:\Users\allan\Desktop\tools\ps2sdk\ee\bin\make.exe


if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto error
)


C:\Users\allan\Desktop\tools\elf_injector.exe -e C:/Users/allan/Documents/ws2024/elf_injector/gow2debugultraexpanded.elf -n ./gow2engine.elf -o ./SCUS_974.67 -a 0

goto sucess

:error
pause

:sucess
del .\*.o
exit