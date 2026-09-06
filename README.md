
```Mermaid
flowchart LR

    TESTS(["calculator-tests"])
    SCI(["scientific-calculator"])
    STD(["standard-calculator"])

    LIB{{"lib"}}

    PARSER["parser"]
    FEATURES["features"]
    TOKENIZER["tokenizer"]
    UTILITIES["utilities"]

    GTEST_MAIN[["GTest::gtest_main"]]
    GTEST[["GTest::gtest"]]
    THREADS{{"Threads::Threads"}}

    TESTS -. PRIVATE .-> LIB
    SCI -. PRIVATE .-> LIB
    STD -. PRIVATE .-> LIB

    LIB -. INTERFACE .-> PARSER
    LIB -. INTERFACE .-> TOKENIZER
    LIB -. INTERFACE .-> UTILITIES

    PARSER --> FEATURES
    FEATURES --> PARSER
    FEATURES --> TOKENIZER
    FEATURES --> UTILITIES

    TESTS -. PRIVATE .-> GTEST_MAIN

    GTEST_MAIN -. INTERFACE .-> GTEST
    GTEST_MAIN -. INTERFACE .-> THREADS
    GTEST -. INTERFACE .-> THREADS
```