cmake_minimum_required(VERSION 3.14)
project(convertisseureurofranc)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 14)
find_package(Qt5Widgets)

add_executable(convertisseureurofranc main.cpp Fenetre.cpp Fenetre.h)
target_link_libraries(convertisseureurofranc Qt5::Widgets)