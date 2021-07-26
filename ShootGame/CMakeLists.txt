file(GLOB SHOOTGAME_SOURCES *.cpp )
add_executable(ShootGame ${SHOOTGAME_SOURCES})
target_link_libraries(ShootGame PRIVATE Qt6::Widgets)
