cmake_minimum_required(VERSION 3.12)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

project(minpcomm)

include_directories(core)

set(SOURCES
    core/conn/minicom/minicom.cpp
)

add_executable(minpcomm main.cpp ${SOURCES})

# single file project
#add_executable(test blink.c)

#pull in our pico_stdlib witch pulls in commonly used features
target_link_libraries(minpcomm pico_stdlib)

pico_enable_stdio_usb(minpcomm 1)
pico_enable_stdio_uart(minpcomm 0)

#create map/bin/hex file etc.
pico_add_extra_outputs(minpcomm)

