cmake_minimum_required(VERSION 3.5)

project(Memory_Game VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_QT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        numbermem.h
        numbermem.cpp
        numbermem.ui
        textmem.h
        textmem.cpp
        textmem.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Memory_Game
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )

else()
    add_executable(Memory_Game
        ${PROJECT_SOURCES}
    )
endif()


target_link_libraries(Memory_Game PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(Memory_Game PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Memory_Game)
endif()


install(TARGETS Memory_Game DESTINATION bin)

install(FILES $<TARGET_FILE:Qt5::Core> DESTINATION bin)
install(FILES $<TARGET_FILE:Qt5::Gui> DESTINATION bin)
install(FILES $<TARGET_FILE:Qt5::Widgets> DESTINATION bin)

install(FILES $<TARGET_FILE:Qt5::QWindowsIntegrationPlugin> DESTINATION bin/platforms)
install(FILES $<TARGET_FILE:Qt5::QWindowsDirect2DIntegrationPlugin> DESTINATION bin/platforms)
