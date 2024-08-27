# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
add_executable(exe)
target_sources(exe
    PRIVATE
        exe.cpp
    PRIVATE FILE_SET CXX_MODULES FILES
        exe_mod.cpp
)
