cmake_minimum_required(VERSION 2.8)

add_executable(manager-keybord keybord.cpp
        ../../lib/manager/KeyboardManager.cpp )
target_link_libraries(manager-keybord
        pthread
        manager
        boost_thread
        boost_system
        ncursesw
        )


add_executable(manager-scene SceneMgrTest.cpp)
target_link_libraries(manager-scene
        pthread
        manager
        boost_thread
        boost_system
        ncursesw
        )

add_executable(fps-scene FpsTest.cpp)
target_link_libraries(fps-scene
        pthread
        manager
        boost_thread
        boost_system
        ncursesw
        )

add_executable(key-test keytest.cpp)
target_link_libraries(key-test
        pthread
        manager
        boost_thread
        boost_system
        ncursesw
        )
