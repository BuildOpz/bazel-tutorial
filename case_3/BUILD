cc_library(
    name="greet",
    srcs=["src/greetings.c",
    ],
    hdrs=["include/greetings.h"],
    #includes=["include"],
)

cc_binary(
    name="calc",
    srcs=["src/main.c",],
    deps=[":greet",
    "@calculations//:external_calculations_lib"],

)