cmake_minimum_required(VERSION 3.16)

if(DEFINED ENV{HOMEKIT_PATH})
    set(HOMEKIT_PATH "$ENV{HOMEKIT_PATH}")
else()
    set(HOMEKIT_PATH "${CMAKE_CURRENT_LIST_DIR}/esp-homekit-sdk")
endif()

set(EXTRA_COMPONENT_DIRS 
    "${HOMEKIT_PATH}/components"
    "${HOMEKIT_PATH}/components/homekit"
    "${HOMEKIT_PATH}/examples/common"
)

include("$ENV{IDF_PATH}/tools/cmake/project.cmake")
project(MiScreenBarLight-HomeKit)
