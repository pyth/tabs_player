if(WIN32)
	cmake_minimum_required(VERSION 3.4)
else()
	cmake_minimum_required(VERSION 2.8.4)
endif()
project(tabs_player)

set(LIBRARY_PATH "" CACHE PATH "3rd party libraries")
set(INCLUDE_PATH "" CACHE PATH "3rd party library headers")
set(CMAKE_PREFIX_PATH "${CMAKE_PREFIX_PATH};${LIBRARY_PATH};${INCLUDE_PATH}")

include_directories(${INCLUDE_PATH})
link_directories(${LIBRARY_PATH})

add_executable(${PROJECT_NAME} main.cpp notes.h)
target_link_libraries(${PROJECT_NAME} openal alut)
