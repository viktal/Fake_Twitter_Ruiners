set(SOURCES
        src/Model.cpp)

add_library(fake_twitter STATIC ${SOURCES})
target_include_directories(fake_twitter PUBLIC include)
