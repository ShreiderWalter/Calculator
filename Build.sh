#!/bin/bash
# get script folder
THIS_SCRIPT_FULLPATH="$(cd "${0%/*}" 2>/dev/null; echo "$PWD"/"${0##*/}")"
THIS_SCRIPT_DIR=`dirname "$THIS_SCRIPT_FULLPATH"`

SCRIPTS_DIR="scripts"
BUILD_DIR="build"
BIN_DIR="bin"
CMAKE=cmake

function testReturnStatus
{
    if (test $? != 0) ; then
        echo $1
        exit 1
    fi
}

##################### Main Script #####################
# usage: script [path to gcc compiller] 

mkdir -p $BUILD_DIR/$BIN_DIR

# build project files
cd $BUILD_DIR

cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release $THIS_SCRIPT_DIR
testReturnStatus "Project generation failed!"

make -j 2
testReturnStatus "Make failed!"