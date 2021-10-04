cmake_minimum_required(VERSION 3.20)
project(crypto_tool C)

set(BINARY_NAME crypto_tool)

set(CMAKE_C_STANDARD 99)

add_executable(${BINARY_NAME}
        main.c
        types.h
        utilities.c  utilities.h
        crypto/aes.c crypto/aes.h
)

include_directories(
        /usr/include/gtk-3.0
        /usr/include/at-spi2-atk/2.0
        /usr/include/at-spi-2.0
        /usr/include/dbus-1.0 
        /usr/lib/x86_64-linux-gnu/dbus-1.0/include
        /usr/include/gtk-3.0
        /usr/include/gio-unix-2.0
        /usr/include/cairo
        /usr/include/pango-1.0
        /usr/include/fribidi
        /usr/include/harfbuzz
        /usr/include/atk-1.0
        /usr/include/cairo
        /usr/include/pixman-1
        /usr/include/uuid
        /usr/include/freetype2
        /usr/include/libpng16
        /usr/include/gdk-pixbuf-2.0
        /usr/include/libmount
        /usr/include/blkid
        /usr/include/glib-2.0 /usr/lib/x86_64-linux-gnu/glib-2.0/include
        /usr/include/openssl
)

target_link_libraries(${BINARY_NAME}
        crypto
        gtk-3
        gdk-3
        pangocairo-1.0
        pango-1.0
        harfbuzz
        atk-1.0
        cairo-gobject
        cairo
        gdk_pixbuf-2.0
        gio-2.0
        gobject-2.0
        glib-2.0
)
