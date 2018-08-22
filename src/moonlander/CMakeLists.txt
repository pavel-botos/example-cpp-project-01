add_library(GravityService MoonGravityService.cpp GravityService.h)
add_library(MoonLanderAutopilot1D MoonLanderAutopilot1D.cpp MoonLanderAutopilot1D.h)


set_property(TARGET GravityService PROPERTY CXX_STANDARD 11)

set_property(TARGET MoonLanderAutopilot1D PROPERTY CXX_STANDARD 11)

