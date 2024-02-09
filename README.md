# Android NDK Hello

A simple hello world example with the [Android Native Development Kit (NDK)](https://developer.android.com/ndk). It is a shared library made with JNI, so it can be loaded and called from Java.

There is no Java side of this project because It wasn't the focus. Maybe I will add it later.

## Build

Make sure the NDK environment variables are set:
```bash
export NDK_HOME=/path/to/your/ndk/installation
export PATH=$NDK_HOME:$PATH
```

Build the project:
```bash
ndk-build
```

