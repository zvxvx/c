cmake_minimum_required(VERSION 3.28)
project(FilesAndArrays C)
set(CMAKE_C_STANDARD 17)
add_executable(FilesAndArrays cscd240Lab7.c
        lab7.c
        utils/fileUtils.c
        utils/sortUtils.c)