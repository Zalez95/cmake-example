# Librerias a incluir
option(USE_MYMATH "Use my maths" ON)
if (USE_MYMATH)
	include_directories("${TestProject_SOURCE_DIR}/maths/include")
	link_directories("${TestProject_SOURCE_DIR}/maths/src")
	set(EXTRA_LIBS ${EXTRA_LIBS} maths)
endif (USE_MYMATH)

# Ejecutable
include_directories("${TestProject_SOURCE_DIR}/test/include")
file(GLOB SOURCES ${TestProject_SOURCE_DIR}/test/src/*.cpp)

add_executable(TestProject ${SOURCES})
target_link_libraries(TestProject ${EXTRA_LIBS})

