cmake_minimum_required(VERSION 3.16)

project(SeaTradeSimulator)

add_executable(Simulator main.cpp Ship.cpp Cargo.cpp Coordinates.cpp Island.cpp Map.cpp)
