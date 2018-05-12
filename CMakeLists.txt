cmake_minimum_required(VERSION 3.9)
project(Tomasulo-Scoreboard)

set(CMAKE_CXX_STANDARD 11)

add_executable(Tomasulo-Scoreboard main.cpp Modules/Fetch.cpp Modules/Fetch.h Modules/instrMemory.cpp Modules/instrMemory.h)