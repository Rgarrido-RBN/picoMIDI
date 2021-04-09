
cmake_minimum_required (VERSION 3.13)

set(PICO_SDK_PATH /home/ruben/dev/pico-sdk)

include(pico_sdk_import.cmake)

project(picoMIDI)

pico_sdk_init()

include_directories(inc)

add_executable(picoMIDI
    src/main.c
    src/gpioPico.cpp
    src/gpioDeclaration.c
    inc/main.h
    inc/gpioPico.h
    inc/gpioDeclaration.h
)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(picoMIDI pico_stdlib)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(picoMIDI)





