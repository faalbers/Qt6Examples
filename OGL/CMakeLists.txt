file(GLOB OGL_SOURCES *.cpp )
add_executable(OGL ${OGL_SOURCES})
target_link_libraries(OGL PRIVATE Qt6::Widgets Qt6::OpenGL Qt6::OpenGLWidgets)
