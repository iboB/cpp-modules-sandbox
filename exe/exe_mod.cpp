// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
module;

#include <string_view>
#include <iostream>

export module exe_mod;

export namespace exe {

void say_hello(std::string_view name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

}