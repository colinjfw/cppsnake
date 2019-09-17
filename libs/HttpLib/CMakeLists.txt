cmake_minimum_required(VERSION 3.0)

project(HttpLib)

add_library(httplib INTERFACE)
target_include_directories(httplib INTERFACE include/)
