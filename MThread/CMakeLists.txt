file(GLOB MTHREAD_SOURCES *.cpp )
add_executable(MThread ${MTHREAD_SOURCES})
target_link_libraries(MThread PRIVATE Qt6::Widgets)
