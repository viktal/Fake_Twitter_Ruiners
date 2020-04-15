set(SOURCES
        src/controller/NewsFeed.cpp
        src/controller/IController.cpp

        src/db/Field.cpp

        src/manager/SimpleSchemaUserManager.cpp
        src/manager/SimpleSchemaTwitManager.cpp
        src/manager/ITwitManager.cpp
        src/manager/LikeManager.cpp
        src/manager/IManager.cpp

        src/model/BasicTwit.cpp
        src/model/BasicComment.cpp
        src/model/Tag.cpp
        src/model/IModel.cpp
        src/model/BasicUser.cpp
        src/model/ITwit.cpp
        src/model/IUser.cpp

        src/view/Body.cpp
        src/view/MainPageBuilder.cpp
        src/view/IView.cpp
)

add_library(fake_twitter STATIC ${SOURCES})
target_include_directories(fake_twitter PUBLIC include)
#target_compile_options(fake_twitter PUBLIC -std=c++2a)
