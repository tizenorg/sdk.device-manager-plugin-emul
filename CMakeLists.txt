CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(slp_devman_plugin C)

SET(SRCS
	src/device_manager_io.c
	src/device_manager_plugin_maru.c)

IF("${CMAKE_BUILD_TYPE}" STREQUAL "")
	SET(CMAKE_BUILD_TYPE "Release")
ENDIF("${CMAKE_BUILD_TYPE}" STREQUAL "")
MESSAGE("Build type: ${CMAKE_BUILD_TYPE}")

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)

SET(CMAKE_C_FLAGS_DEBUG "-O0 -g")
SET(CMAKE_C_FLAGS_RELEASE "-O2")

INCLUDE(FindPkgConfig)
pkg_check_modules(pkgs REQUIRED devman_plugin)

FOREACH(flag ${pkgs_CFLAGS})
	SET(EXTRA_CFLAGS "${EXTRA_CFLAGS} ${flag}")
ENDFOREACH(flag)


SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EXTRA_CFLAGS}")

ADD_LIBRARY(${PROJECT_NAME} SHARED ${SRCS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${pkgs_LDFLAGS})

SET(PREFIX ${CMAKE_INSTALL_PREFIX})

INSTALL(TARGETS ${PROJECT_NAME} DESTINATION lib COMPONENT RuntimeLibraries)
