cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Qt6Examples VERSION 0.1 LANGUAGES CXX)

set(CMAKE_PREFIX_PATH C:/Qt/6.1.1/mingw81_64)
#set(CMAKE_PREFIX_PATH /Users/frank/Qt/6.1.2/macos)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS Widgets OpenGL OpenGLWidgets REQUIRED)

add_subdirectory(FPlot)
add_subdirectory(ShootGame)
add_subdirectory(MThread)
add_subdirectory(OGL)

#file(GLOB QT6SIM_SOURCES *.cpp )

#add_executable(${PROJECT_NAME} ${QT6SIM_SOURCES})
#target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
