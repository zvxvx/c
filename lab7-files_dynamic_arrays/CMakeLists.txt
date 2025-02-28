cmake_minimum_required(VERSION 3.25)
project(FilesAndArrays C)
set(CMAKE_C_STANDARD 17)
add_executable(FilesAndArrays cscd240Lab7.c
        lab7.c
        utils/fileUtils.c
        utils/sortUtils.c
        cscd240Lab7.c)