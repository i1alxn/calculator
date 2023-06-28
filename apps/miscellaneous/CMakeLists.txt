add_executable(
        Miscellaneous
        main.cpp
)

target_link_libraries(
        Miscellaneous
        PUBLIC
        pqxx
        -lpq
#        Calculator
#        Calc_Utils_
)