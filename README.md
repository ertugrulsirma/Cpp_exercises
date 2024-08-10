Build Cpp project with VSCode on macOS using CMake 

-> Download&install Visual Studio Code and CMake.
-> Add C++, CMake, CMake Tools extensions on VSCode.
-> Check Cmake working correct with "cmake --version" command.
    If got "zsh: cmake not found:cmake" error it means you have to set CMake path. Run this commands:
        nano ~/.zshrc
        export PATH="/Applications/CMake.app/Contents/bin:$PATH"
        source ~/.zshrc
->  Follow this commands for build:
    mkdir build
    cd build
    cmake .. (Create makefile)
    make (Create executable file)
    ./app (Run executable file)


Notes:
We can use different compilers like g++, clang++, MSVC instead of CMake to build C++ projects. MSVC is for building on Windows. g++ is good for small and simple projects. For bigger and more complex projects, CMake is better.

Build using g++:
Run "xcode-select install" command on terminal. It includes g++,git,make etc.
Check g++ with g++ --version.
g++ -o MyExecutable src/hello_world.cpp
./MyExecutable

