#!/bin/bash
CC_PREFIX=/Volumes/DataHD/workspace/xclang-dev/obj/InstallRoot/bin
BIN_PREFIX=/Volumes/DataHD/workspace/xclang-dev/obj/InstallRoot/tools/binutils/bin

TARGET=$1

export CC=${CC_PREFIX}/$TARGET-xclang
export CXX=${CC_PREFIX}/$TARGET-xclang++
export XAS=${CC_PREFIX}/$TARGET-xas

export AS=${BIN_PREFIX}/$TARGET-as
export AR=${BIN_PREFIX}/$TARGET-ar
export LD=${BIN_PREFIX}/$TARGET-ld
export DLLTOOL=${BIN_PREFIX}/$TARGET-dlltool
export NM=${BIN_PREFIX}/$TARGET-nm
export OBJCOPY=${BIN_PREFIX}/$TARGET-objcopy
export RANLIB=${BIN_PREFIX}/$TARGET-ranlib

