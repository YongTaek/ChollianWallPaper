# ChollianWallPaper

Inspired by [himawaripy](https://github.com/boramalper/himawaripy), ChollianWallPaper is simple GUI app that aims to set near-realtime image from [Chollian 2A](https://en.wikipedia.org/wiki/Chollian) as wallpaper.


### Dependency

- CMake
- curl
- Qt6
- Boost (date_time, locale)

In macOS, you can install them using homebrew :

    brew install cmake
    brew install qt6    
    brew install boost


### Build
   
    mkdir build
    cd build
    cmake ..
    make
    
    
### Status

- [x] Download and edit image
- [x] Set image as background first time
- [x] Update background image
- [ ] Automatically update image in near-realtime
- [ ] Test in Windows
- [ ] Test in Linux


