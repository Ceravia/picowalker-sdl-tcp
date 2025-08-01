# picowalker-sdl



## Important Information about this fork

A TCP compatible picowalker-sdl build meant to be used with melonDS-IR

To build, libpicowalkercore.a file is required from the main https://github.com/mamba2410/picowalker


The demo release SHOULD work perfectly fine. Just run it from the command line and make sure to give it arguments. 127.0.0.1 for the local machine, and melonDS-IR should display the port. Default is 8081.


I am pretty sure this only builds on linux and I will probably not make a windows fork. This will work fine in a VM if needed and is mostly for debugging purposes.

Note that after each connection, you currently need to kill both the picowalker program, and the melonDS-IR program. This isn't a technical limitation and is only a skill and patience issue on my end :)

If you have time feel free to bug report or contribute, but this isn't really meant to be user facing and I may not get to fixing things on this end very often.

Thank you for your time!



## Original README from https://github.com/mamba2410/picowalker-sdl

Cross-platform SDL implementation of the picowalker stuffs.

For both windows and linux versions, you'll want to make sure that you have a 64k eeprom named `eeprom.bin` in the same directory as your executable.
For this, use [porocyon's rom dumper](https://git.titandemo.org/PoroCYon/pokewalker-rom-dumper) to clone an existing walker.

## Linux

Make sure you have `SDL2` and `SDL2-devel` installed.

```bash
mkdir -p build/x64-linux
cmake -B build/x64-linux .
cmake --build build/x64-linux --config Release
```

Your executable is `build/x64-linux/Release/picowalker-sdl`

## Windows

Install [vcpkg](https://vcpkg.io/en/getting-started.html) and download SDL2 with `./vcpkg.exe install sdl2`

Inside git bash:

```bash
mkdir -p build/x86-windows
cmake -B build/x86-windows -DCMAKE_TOOLCHAIN_FILE=${YOUR_VCPKG_INSTALL_DIR}/scripts/buildsystems/vcpkg.cmake
cmake --build build/x86-windows --config Release
```

Youre excutable is `build/x86-windows/Release/picowalker-sdl.exe` and you need `SDL2.dll` to be in the same folder as the `.exe` for it to run.

## What I need to add

- Only update screen once per main loop.
- Checking pressed buttons can be done with `SDL_PollEvent`. OR better wy might be with `SDL_GetKeyState` to return an array of bools if key is down.
- accel can probably just be a button press. eg `1` for +1 step, `2` for +10 steps, `3` for +100 etc.
- connect can be left alone for now, people will probably ask for melonds or whatever
