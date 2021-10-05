cmake_minimum_required(VERSION 3.18)
project(crypto_tool C)

set(BINARY_NAME crypto_tool)

set(CMAKE_C_STANDARD 99)

add_executable(${BINARY_NAME}
        main.c
        types.h
        utilities.c         utilities.h
        crypto/aes.c        crypto/aes.h
        graphic/master.c    graphic/master.h
        graphic/sidebar.c   graphic/sidebar.h
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-3.0)

include_directories(
        ${GTK_INCLUDE_DIRS}
)

target_link_libraries(${BINARY_NAME} PRIVATE
        crypto
        ${GTK_LIBRARIES}
)

target_compile_definitions(${BINARY_NAME} PRIVATE
        ${GTK_CFLAGS_OTHER}
)