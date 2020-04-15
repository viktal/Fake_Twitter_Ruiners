set(SOURCES
        src/BasicTwit.cpp
        src/model.cpp
        src/view/IView.cpp
        src/controller/NewsFeed.cpp
        src/controller/IController.cpp
        src/view/MainPageBuilder.cpp
        src/db/Field.cpp
        src/manager/SimpleSchemaUserManager.cpp
        src/manager/SimpleSchemaTwitManager.cpp
)

add_library(fake_twitter STATIC ${SOURCES})
target_include_directories(fake_twitter PUBLIC include)
target_compile_options(fake_twitter PUBLIC -std=c++2a)
