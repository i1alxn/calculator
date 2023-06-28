add_executable(
        SimpleExample
        main.cpp
)

target_link_libraries(
        SimpleExample
        PRIVATE
        Calculator
        Calc_Utils_
)