#!/bin/sh
#
export PATH=/Library/Developer/Toolchains/swift-latest.xctoolchain/usr/bin:"${PATH}"
exec swift build -Xlinker -L/usr/local/lib -Xcc -I/usr/local/include/glib-2.0/ -Xcc -I/usr/local/include "$@"
