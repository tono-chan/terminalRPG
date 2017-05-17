cmake_minimum_required(VERSION 2.8)

add_library(manager STATIC
        SceneMgr.cpp
        BaseScene.cpp
        BattleScene.cpp
        StartScene.cpp
        Task.cpp
        KeyboardManager.cpp
        ControllerManager.cpp
        Controller.cpp
        StartController.cpp
        BattleController.cpp
        SubTask.cpp
        Fps.cpp
        MapScene.cpp
        MenuScene.cpp
        EventScene.cpp
        )
target_link_libraries(manager
        pthread
        boost_thread
        boost_system
        command
        )
