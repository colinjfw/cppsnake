cmake_minimum_required( VERSION 3.0 )

project( cppsnake )

include_directories( ./include ./src )
add_executable( binary ./src/main.cpp ./src/Board.cpp )

# Vendor:
find_package (Threads)

add_subdirectory( ./libs/HttpLib )
add_subdirectory( ./libs/JsonLib )
target_link_libraries( binary httplib jsonlib ${CMAKE_THREAD_LIBS_INIT} )
