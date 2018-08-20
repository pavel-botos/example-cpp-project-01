add_library(MoonGravityService MoonGravityService.cpp MoonGravityService.h)
add_library(MoonLanderAutopilot1D MoonLanderAutopilot1D.cpp MoonLanderAutopilot1D.h)


set_property(TARGET MoonGravityService PROPERTY CXX_STANDARD 11)

set_property(TARGET MoonLanderAutopilot1D PROPERTY CXX_STANDARD 11)

