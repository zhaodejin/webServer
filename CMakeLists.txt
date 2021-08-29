cmake_minimum_required(VERSION 3.9.0)
project(webServer)
include_directories(include)
include_directories(/usr/local/include)
aux_source_directory(src DIR_SRCS)
set(SOURCE_FILES ${DIR_SRCS})
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} 
    m
    )