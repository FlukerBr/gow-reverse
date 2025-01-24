del gow2mod.elf
docker exec ps2-homebrew /bin/bash -c "rm -R /gow2mod"
docker cp C:\Users\allan\Documents\ps2-dev\gow2mod ps2-homebrew:/

docker exec ps2-homebrew /bin/bash -c "cd /gow2mod && make"

if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto cancel
)

goto py

:py

docker cp ps2-homebrew:/gow2mod/gow2mod.elf C:\Users\allan\Documents\ps2-dev\gow2mod\
python C:/Users/allan/Documents/ws2024/elf_injector/elf_injector.py -e C:/Users/allan/Documents/ws2024/elf_injector/gow2ultraexpanded.elf -m C:/Users/allan/Documents/ps2-dev/gow2mod/gow2mod.elf -o C:/Users/allan/Documents/ps2-dev/gow2mod/SCUS_974.81 -a 0
:cancel
pause