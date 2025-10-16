del gow2engine.elf
docker exec ps2-homebrew /bin/bash -c "rm -R /gow-engine"
docker cp C:\Users\allan\Documents\ps2-dev\gow-engine ps2-homebrew:/

docker exec ps2-homebrew /bin/bash -c "cd /gow-engine && make"

if %ERRORLEVEL% neq 0 (
    echo ERRO %ERRORLEVEL%.
    goto cancel
)

goto py

:py

docker cp ps2-homebrew:/gow-engine/gow2engine.elf C:\Users\allan\Documents\ps2-dev\gow-engine\
python C:/Users/allan/Documents/ws2024/elf_injector/elf_injector.py -e C:/Users/allan/Documents/ws2024/elf_injector/gow1ultraexpanded.elf -m C:/Users/allan/Documents/ps2-dev/gow-engine/gow2engine.elf -o C:/Users/allan/Documents/ps2-dev/gow-engine/SCUS_973.99 -a 0
:cancel
pause