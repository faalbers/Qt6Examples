file(GLOB FPLOT_SOURCES *.cpp )
add_executable(FPlot ${FPLOT_SOURCES})
target_link_libraries(FPlot PRIVATE Qt6::Widgets)
