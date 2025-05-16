set(Tests
        # Sources
        "test.cpp"
        # Add additional tests as needed
)

set(Dirs
        "../include"
)

add_library(tests ${Tests})
target_include_directories(tests PUBLIC ${Dirs})
