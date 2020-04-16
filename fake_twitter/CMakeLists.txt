set(SOURCES
        src/db/Field.cpp

        src/manager/UserManager.cpp
        src/manager/TwitManager.cpp
        src/manager/ITwitManager.cpp
        src/manager/IManager.cpp

        src/view/Body.cpp
        src/view/Profile.cpp
        src/view/Navbar.cpp
        src/view/MainPageBuilder.cpp
        src/view/IView.cpp
)

add_library(fake_twitter STATIC ${SOURCES})
target_include_directories(fake_twitter PUBLIC include)
#target_compile_options(fake_twitter PUBLIC -std=c++2a)
