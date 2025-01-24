@echo off

del include-src\*.o
del *.o
del injectelf/SCUS_974.81

make

if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto cancel
)

goto py

:cancel
pause

:py
del include-src\*.o
del *.o
python C:\Users\allan\Documents\ws2024\elf_injector\elf_injector.py