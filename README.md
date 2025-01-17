# ChollianWallPaper

![macOS 11](https://github.com/pjessesco/ChollianWallPaper/actions/workflows/macOS11.yml/badge.svg) 
![macOS 10.15](https://github.com/pjessesco/ChollianWallPaper/actions/workflows/macOS10.15.yml/badge.svg) 
![Windows](https://github.com/pjessesco/ChollianWallPaper/actions/workflows/windows.yml/badge.svg)


Inspired by [himawaripy](https://github.com/boramalper/himawaripy), ChollianWallPaper is simple GUI app that aims to set near-realtime image from [Chollian 2A](https://en.wikipedia.org/wiki/Chollian) as wallpaper.

## Download

Pre-built binary is available in `Actions` tab above for
 - macOS (Intel) [<= Catalina](https://github.com/pjessesco/ChollianWallPaper/actions/workflows/macOS10.15.yml), [>=Big Sur](https://github.com/pjessesco/ChollianWallPaper/actions/workflows/macOS11.yml)
 - [Windows (experimental)](https://github.com/pjessesco/ChollianWallPaper/actions/workflows/windows.yml)

## Dependency

- CMake
- curl
- Qt6

 
## Build

Refer [github workflow](https://github.com/pjessesco/ChollianWallPaper/tree/main/.github/workflows) for more details.

### macOS
 
    brew install qt6 cmake
    
    mkdir build
    cd build
    cmake ..
    make
    
To generate bundle for macOS, run `scripts/bundle_macos.py`. 

### Windows

1. Install [Qt6](https://www.qt.io/download-qt-installer) and [CMake](https://cmake.org/download/)

2. Download pre-built curl. [link](https://curl.se/download.html)

3. Set environment variables.

4. Run below commands

-

    mkdir build
    cd build
    cmake -DCURL_LIBRARY=path/to/libcurl.dll.a -DCURL_INCLUDE_DIR=path/to/include ..

5. Open `ChollianWallpaper.sln` and build proejct.

6. You have to copy `libcurl-x64.dll` to the directory where executable exists.

