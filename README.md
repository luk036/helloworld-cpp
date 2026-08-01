# helloworld-cpp

Minimal C++ hello-world example with a small `foo` static library, built with
CMake or xmake.

## Build and run

```bash
# CMake
cmake -S. -B build
cmake --build build
./build/helloworld

# xmake
xmake
xmake run helloworld-cpp
```

## Test

```bash
cmake -S. -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

## Layout

```
src/
├── main.cpp   # Entry point, prints add(1, 2)
├── foo.cpp    # foo library implementation
└── foo.h      # foo library public header
```
