set(Tests
        # Sources
        "test1.cpp"
        "test2.cpp"
        "test3.cpp"
)

set(Dirs
        "../include"
)

add_library(tests ${Tests})
target_include_directories(tests PUBLIC ${Dirs})
