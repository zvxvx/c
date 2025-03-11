cmake_minimum_required(VERSION 3.25)
project(FilesAndArrays C)
set(CMAKE_C_STANDARD 17)
add_executable(Lab9
        cscd240Lab9.c
        lab9.c
        utils/fileUtils.c
        utils/utils.c
        utils/fileUtils.h
        utils/utils.h
stocks.txt)