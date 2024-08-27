# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

project(modules-sandbox
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    # /Zc:preprocessor - incompatible with Windows.h
    add_compile_options(
        -W4
        -D_CRT_SECURE_NO_WARNINGS -Zc:__cplusplus -permissive-
        -volatile:iso -Zc:throwingNew -Zc:templateScope -utf-8 -DNOMINMAX=1
        -wd4251 -wd4275
    )
else()
    add_compile_options(-Wall -Wextra)
endif()

add_subdirectory(libs)
add_subdirectory(exe)
