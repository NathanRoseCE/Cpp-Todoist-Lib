cmake_minimum_required(VERSION 3.16)
project("Todoist API")

set("BUILD_TESTS" YES)

set("todoist_api_src" ${CMAKE_CURRENT_SOURCE_DIR}/src/Task.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/TodoistApi.cpp)
set("todoist_api_include"  ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library("Todoist_API" ${todoist_api_src})
target_include_directories("Todoist_API" PRIVATE ${todoist_api_include})


#set("GCC_COMPILE_FLAGS" "-ljsoncpp")
#target_compile_options("Todoist_API" PRIVATE "ljsoncpp")


