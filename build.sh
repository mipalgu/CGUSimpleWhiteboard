#!/bin/sh
#
export PATH=/Library/Developer/Toolchains/swift-latest.xctoolchain/usr/bin:"${PATH}"
exec swift build -Xlinker -L/usr/local/lib -Xcc -I/usr/local/include -Xcc -I/usr/local/include/gusimplewhiteboard "$@"
